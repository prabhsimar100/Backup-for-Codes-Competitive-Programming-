#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int a[N];

struct segment_tree
{
	vector <int> st;
	void init(int n)
	{
		st.resize(4*n);
	}


	//We recursively visit every node of the tree in this 
	//function, the start and end keep track of range of 
	//elements the current node has the sum of, initially
	//we are at the first element that contains all the nodes
	//The int node is used to keep track of index in the segment tree vector
	void build(int start, int end, int node)	
	{
		if(start==end)
		{
			st[node]=a[start];
			return;
		}
		else{int mid=(start+end)/2;

		build(start,mid,(2*node)+1);		//Build left sub tree
		build(mid+1,end,(2*node)+2);		//Build right sub tree

		st[node]=st[2*node+1] + st[2*node+2];
		}
	}


	//Same as above for start, end and node. l&r is the range in which we want to make the query
	//l & r don't change in the recursive calls.
	int query(int start, int end, int l, int r, int  node)
	{
		//If there is no overlap between our current node and l-r
		if(r<start || l>end)
			return 0;

		//If our node lies completely within l-r
		if(start>=l && end<=r)
			return st[node];
		//Otherwise only a partial part of the current node's range is required in the query
		//So we build the left and right subtree and get their answers of the relevant part

		int mid=(start+end)/2;
		int q1 = query(start, mid, l, r, 2 * node + 1);
		int q2 = query(mid + 1 , end, l, r, 2 * node + 2);
		return q1 + q2;

	}

	//start, end, node same as above. Value is the new value to be updated
	//int index is the index in the array 'a' that needs to be updated, they don't change in recursive calls
	void update(int start, int end, int index, int value, int node)
	{
		//if we have reach the root node, then update
		if(start==end)
		{
			a[index]=st[node]=value;
			return;
		}
		//Otherwise reach the root node recursively by appropriately calling a sub tree
		
		else
		{
			int mid=(start+end)/2;
			if(index<=mid)			//Left sub tree
				{
					update(start, mid, index, value, 2*node+1);
				}

			else update(mid+1, end, index, value, 2*node+2);
		
		st[node]=st[2*node+1] + st[2*node+2];
		}	


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
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		G.init(n);
		// G.build(0, n - 1, 0);
		cout << G.query(0, n - 1, 2, 4, 0) << '\n';
		G.update(0, n - 1, 2, 10, 0);
		cout << G.query(0, n - 1, 2, 4, 0) << '\n';
	}
	return 0;
}