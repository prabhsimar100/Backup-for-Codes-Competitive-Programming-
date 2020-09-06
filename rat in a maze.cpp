#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


char grid[1005][1005];
int n,m;
int ans[1005][1005]={0};
int flag=0;

int possible(int i, int j)
{
	
	// if(j==m-1 && j==n-1)
	// 	{	flag++;
	// 		ans[i][j]=1;
	// 		return 1;
	// 	}
	// if()
	// if(j<m && i<n)
	// 	ans[i][j]=1;
	// if(j<m)
	if(j==m-1 && i==n-1)
		{
			ans[i][j]=1;
			flag++;
			return 1;
		}
	if(grid[i][j]=='X')
		return 0;
	ans[i][j]=1;
	if(j<m && possible(i,j+1))
			{return 1;}
	else if(i<n && possible(i+1,j))
			{return 1;}
	ans[i][j]=0;
	return 0;
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

		

		for(int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cin>>grid[i][j];
			}
		}


		possible(0,0);

		for(int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}

		if(flag==0)
			cout<<-1;






	}
	return 0;
}