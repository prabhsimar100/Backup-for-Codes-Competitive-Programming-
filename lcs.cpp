#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

string a,b;
int m,n;

// void print( int i, int j, int x[][j])
// {
// 	if(i==0||j==0)
// 		return;

// 	if(x[i][j]=x[i-1][j-1]+1)
// 		{	cout<<a[i-1];
// 			print(x,i-1,j-1);
// 		}
// 	else if(x[i-1][j]>x[i][j-1])
// 			print(x,i-1,j);
// 	else print(x,i,j-1);
// }

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
	
		
		getline(cin,a);	
		getline(cin,b);	
		
		 m=a.length();
		 n=b.length();

		int dp[m+2][n+2]={0};

		// for(int i=0;i<=m;i++)
		// 	dp[i][0]=0;
		// for (int i = 0; i <=n; ++i)
		// 	dp[0][i]=0;
	
		for(int i=0;i<=m;i++)
		{	for(int j=0;j<=n;j++)
			{
				if(i==0||j==0){
					dp[i][j]=0;
					continue;
				}
				else if(a[i-1]==b[j-1])
					{
						
						dp[i][j]=dp[i-1][j-1] + 1;}
				else
					dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
			cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}

		// print(m,n,(int*)dp);
		int i=m;
		int j=n;
		vector<char> ans;
		while(i>0 && j>0)
		{
			if(a[i-1]==b[j-1])
				{
					ans.pb(a[i-1]);
					i--;
					j--;
				}
			else if(dp[i-1][j]>dp[i][j-1])
					i--;
			else j--;
		}	

		reverse(ans.begin(), ans.end());
		for(int i=0;i<ans.size();i++)
			cout<<ans[i];
	}
	return 0;
}
