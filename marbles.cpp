// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define mod 1000000007

// ll mod_expo(ll a, ll b){
// 	ll ans=1;
	
// 	while(b){
// 		if(b&1){
// 			ans = (ans*a)%mod;
// 		}
// 		a = (a*a)%mod;
// 		b = b/2;
// 	}
// 	return ans%mod;
// }

// int main(){

// 	ios_base:: sync_with_stdio(false);
// 	cin.tie(NULL); cout.tie(NULL);

// 	#ifndef ONLINE_JUDGE
// 	    freopen("input.txt", "r", stdin);
// 	    freopen("output.txt", "w", stdout);
// 	#endif
	
// 	int t; cin>>t; while(t--)
// 	{
// 		ll n,r;
// 		cin>>n>>r;
// 		n--;
// 		r--;
// 		ll ans=1;
// 		for(ll i=0;i<=r-1;i++)
// 		{

// 			ans=(ans*(n-i))/(r-i);
// 			// ans= ((ans%mod)*((n-i)%mod))%mod;
// 			// ans= ((ans%mod)*(mod_expo(r-i,mod-2)%mod))%mod;
// 		}
// 		// cout<<mod_expo(n,mod-2)%mod;

// 		cout<<ans<<"\n";
// 	}
// 	return 0;
// }
#include <cstdio>

using namespace std;

long long C(int n, int m){
    if(m>n-m) m=n-m;
    
    long long ans=1;
    
    for(int i=0;i<m;i++) ans=ans*(n-i)/(i+1);
    
    return ans;
}

int main(){
    int T,n,k;
    
    scanf("%d",&T);
    
    for(int tc=1;tc<=T;tc++){
        scanf("%d %d",&n,&k);
        printf("%lld\n",C(n-1,k-1));
    }
    
    return 0;
}