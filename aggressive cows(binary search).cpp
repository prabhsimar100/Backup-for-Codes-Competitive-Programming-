#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

ll n,c;

bool cows(ll a[], ll dis)
{
	ll count=1;
	ll prev=a[0];
	for(ll i=1;i<n;i++)
	{	
		if(a[i]-prev>=dis)
		{
			count++;
			prev=a[i];
		}
	}
	if(count>=c)
		return 1;
	else return 0;
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
		
		cin>>n>>c;
		ll a[n],ans=-1;
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ll l=1,r=a[n-1];

		while(l<=r)
		{
			ll mid=(l+r)/2;
			if(cows(a,mid))
			{	ans=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		cout<<ans;
	}
	return 0;
}