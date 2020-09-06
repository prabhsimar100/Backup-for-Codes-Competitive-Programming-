#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

vector<vector<int> > a;
		int n,m;


int check(int x, int y)
{
	int ret=1;
	// int flag=-1;
	while(1)
	{
		// flag=0;
		int a1,b;
		a1=x+ret;
		b=y+ret;
		// int flag=0;
		for (int i = x; i<=a1; ++i)
		{
			// flag++;
			if(a[i][b]!=1)
				return ret;
		}
		for(int i=y;i<=b;i++)
		{
			// flag++;
			if(a[a1][i]!=1)
				return ret;
		}
		ret++;
	}
	return ret;


}

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
		cin>>n>>m;
		a.resize(n+1);
		for (int i = 0; i <=n; ++i)
		{
			a[i].resize(m+1);
		}
		// int a[n+1][m+1];
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}
		for (int i = 0; i <=n; ++i)
		{
			a[i][m]=-1;
		}
		for (int i = 0; i <=m; ++i)
		{
			a[n][i]=-1;
		}

		int ans=0;

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==1)
					{
						int temp=check(i,j);
						ans=max(ans,temp);
					}
			}
		}

		cout<<ans;
	}
	return 0;
}


// int ret=1;
	// int c1=0;
	// for (int i = x; a[i][y]==1; ++i)
	// {
	// 	// if(a[i][y]==1)
	// 		c1++;
	// }

	// int c=0;
	// for (int i = y; a[x][i]==1; ++i)
	// {
	// 	c++;
	// }

	// c=min(c,c1);		//max possible rn