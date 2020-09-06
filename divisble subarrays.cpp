#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int t; cin>>t; while(t--)
	{
		ll i,j,k,n,ans=0;
		cin>>n;
		ll a[n+1];
		
		a[0]=0;

		for (ll i = 1; i <= n; ++i)
		{
			cin>>k;
			a[i]=a[i-1]+k;
			
		}
		
		ll b[n+1]={0};
		for (ll i = 0; i <= n; ++i)
		{
			a[i]=a[i]%n;
			a[i]=(a[i]+n)%n;

			b[a[i]]++;
		}

		
		
		for (ll i = 0; i <= n; ++i)
		{	
			if(b[i]>1)
			ans+= (b[i])*(b[i]-1)/2;
		}


		cout<<ans<<"\n";

	}
	return 0;
}