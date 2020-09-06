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
			ll i,j,m,c,n,count=0,sum=0;
			cin>>n>>m>>c;
			ll a[n],b[n];
			for ( i = 0; i < n; ++i)
			{
				cin>>a[i];
				
			}

			sort(a,a+n);
			for( i=0;i<n;i++)
			{
				b[i]= m*a[i]+c;

			}

			for ( i = 0; i < n; ++i)
			{
				// cout<<a[i]<<"\t"<<b[i]<<endl;
				
			}


			i=0; j=0;
			for(i=0;i<n;i++)
			{
				
				while(a[i]>b[j]){
				// {	cout<<"In this i="<<i<<" j="<<j<<endl;
					j++;}
				// if(i==j)
				// 	continue;

				if(a[i]==b[j] && i!=j){
				// {	cout<<"i="<<i<<" j="<<j<<endl;
					count++;
					int z=j+1;
					while(z<n && a[i]==b[z] && i!=z)
						{count++;
							z++;
						}
				}
			}
		cout<<count;

		}
		return 0;
	}