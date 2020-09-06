	#include<bits/stdc++.h>
	using namespace std;

	#define ll long long int
	#define P pair<int,int>
	#define pb push_back

	int m;

	bool book(int n, int a[])
	{	int sum=0,count=1;
		//to check if it's possible to assign a max of n pages per student
		for(int i=0;i<n;i++)
		{
			
			if(sum+a[i]>n)
			{
				sum=a[i];
				count++;
				if(count>m)
					return 0;
			}
			else sum+=a[i];
		
		}
		cout<<"Count for "<<n<<" is "<<count<<endl;
		return 1;
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
			int n,sum=0,mid,ans=-1;
			cin>>n>>m;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				sum+=a[i];
			}

			int l=1,r=sum;
			//binary search from 1 to 'sum' and check whether it's possible to assign a certain number of pages
			while(1)
			{	
				if(l>r)
					break;
				mid=(l+r)/2;
				
				if(book(mid,a))
				{
					ans=mid;
					r=mid-1;

				}
				else l=mid+1;
				cout<<"okay\t"<<mid<<" "<<ans<<endl;
			}

			cout<<ans;

		}
		return 0;
	}