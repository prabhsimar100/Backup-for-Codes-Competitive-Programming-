	#include<bits/stdc++.h>
	using namespace std;

	#define ll long long int
	#define P pair<int,int>
	#define pb push_back

	ll ans;
	// ll dp[99999999]={0};
	map<ll,ll> dp;

	ll cal(ll n)
	{
		if(dp.count(n))
			return dp[n];
		
		if(n<=11)
			{	dp[n]=n;
				return n;}
		ans= max(n,(cal(n/2)+cal(n/3)+cal(n/4)));
		dp[n]=ans;
		return ans;


		// return dp[n]=max(n,(a+b+c));
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
			ll n;
			cin>>n;
			// for(int i=0;i<=n;i++)
			// 	dp[i]=-1;

			cout<<cal(n);
		}
		return 0;
	}
