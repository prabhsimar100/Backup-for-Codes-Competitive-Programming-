#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

ll n,k;

bool paint(ll a[], ll mid)
{
	ll count=1;
	ll sum=0;
	for(ll i=0;i<n;i++)
	{	
	
		if(sum+a[i]>mid)
		{
			count++;
			sum=a[i];

		}
		else sum+=a[i];
	}
	return count<=k;
	// return 0;
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
		
		cin>>k>>n;
		ll a[n],ans=-1,sum=0;
		for(ll i=0;i<n;i++)
			{cin>>a[i];
				sum+=a[i];}
		sort(a,a+n);
		ll l=1,r=sum;

		while(l<=r)
		{
			ll mid=(l+r)/2;
			if(paint(a,mid))
			{	ans=mid;
				r=mid-1;
			}
			else l=mid+1;
			cout<<mid<<"\t";
		}
		cout<<ans;
	}
	return 0;
}