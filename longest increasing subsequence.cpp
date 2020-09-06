#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
	
		int n;
		cin>>n;
		int a[n+2];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int max=1;
		int dp[n+2];
		dp[0]=1;
		for (int i = 1; i <n; i++)
		{
			dp[i]=1;
			for(int j=0;j<i;j++)
			{
				if((a[i]>a[j]) && (dp[i]<dp[j]+1))
					dp[i]=dp[j]+1;
				
			}
			
			if(max<dp[i])
					max=dp[i];
			// cout<<dp[i];

		}
		cout<<max;
	}
	return 0;
}