#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


int a[100005]={0};
// map<int,vector<P> a> m;
// void factors(int x)
// {
// 	int count=0;
// 	P t;
// 	if(x%2==0)
// 	{
// 		while(x%2==0)
// 		{count++;
// 		x/=2;}
// 		t.first=2;
// 		t.second=count;	
// 		m[x]=
// 	}
// }


int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	int n,x;
	cin>>n;
	int top=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		a[x]++;
		top=max(top,x);
	}
	
	// for(int i=1;i<20;i++)
	// 	cout<<i<<" "<<a[i]<<"\n";
	int k;
	int t; cin>>t; while(t--)
	{
		
		cin>>k;
		int ans=0;
		for(int i=k;i<=top;i+=k)
		{
			// cout<<i<<" B"<<a[i]<<endl;
			if(a[i]>0)
				ans+=a[i];
			
		}
		cout<<ans<<"\n";
	}
	return 0;
}