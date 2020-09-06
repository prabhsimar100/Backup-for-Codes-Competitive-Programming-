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
		P p[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i].F;
			p[i].S=i;
		}
		sort(p,p+n);

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<p[i].F<<" "<<p[i].S<<endl;
			
		// }


		
		// G.build(0, n - 1, 0);

		vector<int>b(n,0);
		
		int ans=0;
		
		for(int x=0;x<n;x++)
		{
			b[p[x].S]=1;
			ans+=accumulate(b.begin()+p[x].S+1,b.end(),0);
		
		}	

		cout<<ans<<"\n";


	}
	return 0;
}