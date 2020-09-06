	#include<bits/stdc++.h>
	using namespace std;

	#define ll long long int
	#define P pair<int,int>
	#define pb push_back

	vector<int> x,b;

	int main(){

		ios_base:: sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);

		#ifndef ONLINE_JUDGE
		    freopen("input.txt", "r", stdin);
		    freopen("output.txt", "w", stdout);
		#endif
		
		//int t; cin>>t; while(t--)
		{
			int n,flag=0;
			cin>>n;
			int a[n];
			for (int i = 0; i < n; ++i)	
				{
					cin>>a[i];
				}
			if(n>=130)
				{cout<<"YES";
					flag++;
				exit(0);}
			else
		{
			for(int i=0;i<n;i++)
				for(int j=i+1;j<n;j++)
					for(int k=j+1;k<n;k++)
						for(int l=k+1;l<n;l++)
						{
							if( (a[i]^a[j]^a[k]^a[l])==0 )
							{
								// cout<<i<<" "<<j<<" "<<k<<" "<<l;
								cout<<"YES";
								flag++;
								exit(0);

							}

						}

		}

		cout<<"NO";

	
	}
	}