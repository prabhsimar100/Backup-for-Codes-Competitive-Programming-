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
	
	//int t; cin>>t; while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int c[65]={0};

		for(int i=0;i<n;i++)
			{
				cin>>b[i];
				

			}
			int pos=0,x;
		for(int i=0;i<n;i++)
		{
			pos=0;
			while(b[i]>0)
			{
				
				if(b[i]%2==1)
					{	c[pos]++;
						c[pos]=c[pos]%3;
					}
				pos++;
				b[i]/=2;					
			}
		}
		int ans=0;
		for(int i=0;i<65;i++)
			{c[pos]=c[pos]%3;}
		for(int i=0;i<65;i++)
			{
				if(c[i]==1)
					ans+=pow(2,i);				
			}
		cout<<ans;
	}
	return 0;
}