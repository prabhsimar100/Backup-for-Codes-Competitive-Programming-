#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


const int N = 200005;
int a[N];

struct segment_tree
{
	vector <int> st[N*4];
	


	//We recursively visit every node of the tree in this 
	//function, the start and end keep track of range of 
	//elements the current node has the sum of, initially
	//we are at the first element that contains all the nodes
	//The int node is used to keep track of index in the segment tree vector
	void build(int start, int end, int node)	
	{
		if(start==end)
		{
			st[node].pb(a[start]);
			return;
		}
		int mid = start + ((end-start)>>1);

		build(start,mid,(2*node)+1);		//Build left sub tree
		build(mid+1,end,(2*node)+2);		//Build right sub tree

		merge(st[2*node+1].begin(),st[2*node+1].end(),st[2*node+2].begin(),st[2*node+2].end(),back_inserter(st[node]));
		
	}


	//Same as above for start, end and node. l&r is the range in which we want to make the query
	//l & r don't change in the recursive calls.
	int query(int start, int end, int l, int r, int  node, int k)
	{
		//If there is no overlap between our current node and l-r
		if(r<start || l>end)
			return 0;

		//If our node lies completely within l-r
		if(start>=l && end<=r)
			return st[node].size()-(upper_bound(st[node].begin(), st[node].end(), k) - st[node].begin());
		//Otherwise only a partial part of the current node's range is required in the query
		//So we build the left and right subtree and get their answers of the relevant part

		int mid = start + ((end - start)>>1);
		int q1 = query(start, mid, l, r, 2 * node + 1,k);
		int q2 = query(mid + 1 , end, l, r, 2 * node + 2,k);
		return q1 + q2;

	}

	
}G;

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
		int i, l,r,k, n;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		int last =0;
		G.build(0, n - 1, 0);
		int q;
		cin>>q;
		while(q--){
			cin>>l>>r>>k;;
			l=max(l^last,1);
			r=min(r^last,n);
			k=k^last;
			if(l>r||l>n)
				{	last=0;
					cout<<0<<"\n";}
			else
				{last=G.query(0,n-1,l-1,r-1,0,k);
					cout<<last<<"\n";}

		}
		// cout << G.query(0, n - 1, 2, 4, 0,k) << '\n';
		// G.update(0, n - 1, 2, 10, 0);
		// cout << G.query(0, n - 1, 2, 4, 0) << '\n';
	}
	return 0;
}