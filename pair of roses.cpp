#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

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
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int m;
		cin>>m;
		sort(a,a+n);

		int i=0, j=n-1,x=0,y=10000000, t1, t2,ans=-1;
		while(i<j && i<n && j>0)
		{
			if(i==j)
				break;
			if(a[i]+a[j]==m)
			{	
				// cout<<"found";
				t1=a[i];
				t2=a[j];
				i++;
				j--;
				y=t2;
				x=t1;
				

				// t1=a[i];
				// cout<<t1;
				// t2=a[j];
				// cout<<t2;
				// t1=abs(t1-t2);
				// i++;
				// j--;
				// ans=min(ans,t1);
			}
			

			else if(a[i]+a[j]<m)
				i++;
			else 
				j--;
			
		}
		cout<<"Deepak should buy roses whose prices are "<<t1<<" and "<<t2<<".\n";
	}
	return 0;
}