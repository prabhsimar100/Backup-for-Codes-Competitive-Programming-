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
		// cout<<"working";
		int n,x,j,z,ans=0,count;
		cin>>n;
		int a[]={2,3,5,7,11,13,17,19};
		
		

		for(int i=1;i<256;i++)
		{
			j=i; count=0; z=n;
			while(j>0)
			{	if(j&1)
					z/=a[count];
				j=j>>1;
				count++;
			}
			
			if(__builtin_popcount(i)&1)
				ans+=z;
			else ans-=z;

		}
		cout<<ans<<"\n";



	}
	return 0;
}