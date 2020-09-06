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
	
	//int t; cin>>t; while(t--)
	{
		int n,r,c;
		cin>>n;
		pair<int,int> a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>r>>c;
			a[i].F=r+c;
			a[i].S=r-c;
		}
		sort(a,a+n);
		int ans=n;
		c=a[0].F;
		int count=1;
		for(int i=1;i<n;i++)
		{
			if(a[i].S<c)
			{
				continue;
			}
			count++;
			c=a[i].F;
		}
		cout<<n-count;
	}
	return 0;
}