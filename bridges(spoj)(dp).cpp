#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int t; cin>>t; while(t--)
	{
		int n;
		cin>>n;
		P a[n];
		// int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i].first;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i].second;

		}

		sort(a,a+n);
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i].F<<" "<<a[i].S<<endl;
		// }
		int dp[n];
		for (int i = 0; i < n; ++i)
		{
			dp[i]=1;
		}
		int ans=1;

		for (int i = 1; i < n; ++i)
		{	
			for(int j=0;j<i;j++)
				if((a[i].S>=a[j].S) && (dp[i]<dp[j]+1))
					dp[i]=dp[j]+1;
			ans=max(dp[i],ans);
		}

		cout<<ans<<"\n";
		// for (int i = 1; i < n; ++i)
		// {
		// 	// int count=0;
		// 	for(int j=0;j<i;j++)
		// 		if(a[i].S>=a[j].S)
		// 			b[i]++;
		// 	if(max<b[i])
		// 		max=b[i];
		// }
		
		// cout<<max<<"\n";
	}



	return 0;
}