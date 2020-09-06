#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
			

		int n,x,temp,y;
		cin>>n;
		int a[n],a1[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		x=a[0];
		for(int i=1;i<n;i++)
			x=x^a[i];

		int  x1=x,count=0;

		
		while(!x1&1)
		{	count++;
			x1=x1>>1;
			
		}
		
		int mask=1<<count;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]&mask)
				ans=ans^a[i];
		}

		int ans2= ans^x;
		cout<<min(ans,ans2)<<" "<<max(ans,ans2);
	}
	
	return 0;
}