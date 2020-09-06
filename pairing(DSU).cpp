#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

//The parent of a the superparent of a group will be the number itseld i.e. it will point to itself

struct dsu
{
	vector<int> parent,size;	//vector containing the parent of each element and size will contain
								//the size of each group only in the size[superparent of the group] index
	int components;				//Components stores the number of groups
	void init(int n)
	{
		parent.clear(); size.clear();
		parent.resize(n);  size.resize(n);
		for(int i=0;i<n;i++)
		{
			parent[i]=i;	//initially every element is the parent of itself and every group's size is 1
			size[i]=1;
			components=n;
		}
	}

	int getparent(int x)		//will return the super parent
	{
		if(parent[x]==x)
			return x;
		else return getparent(parent[x]);
	}

	void unite(int x, int y)
	{
		x=getparent(x);
		y=getparent(y);	  //we now have both the super parents of their groups stored in x&y
		if(x!=y)
		{
			parent[x]=y;
			size[y]+=size[x];
			size[x]=0;			//now the whole group of x is a part of y and it doesn't have an
			components--;		//individual size of group

		}
	}
};

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n,x,y;
	cin>>n;
	dsu a;
	a.init(n);
	int t; cin>>t; while(t--)
	{
		cin>>x>>y;
		a.unite(x,y);	

	}
	int ans=0;
	vector<int> z;

	for(int i=0;i<a.size.size();i++)
	{
		// cout<<a.parent[i]<<" ";
		// cout<<a.size[i]<<"\n";
		if(a.size[i]!=0)
			z.push_back(a.size[i]);
	}
	

	for (int i = 0; i < z.size()-1; ++i)
	{
		for(int j=i+1;j<z.size();j++)
		{
			ans+=z[i]*z[j];
		}
	}

	cout<<ans;

	return 0;
}