#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

ll dp[35];


int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	int ans=0;
	for (int i = 4; i <= 30; ++i)
	{
		dp[i]=dp[i-1]+(i-1)*dp[i-2];
	}

	int t; cin>>t; while(t--)
	{	
		int n;
		cin>>n;
		int ans=0;

		cout<<dp[n]<<"\n";

	}
	return 0;
}