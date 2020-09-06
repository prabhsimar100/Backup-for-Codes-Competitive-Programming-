	#include<bits/stdc++.h>
	using namespace std;

	#define ll long long int
	#define P pair<int,int>
	#define pb push_back

	vector<string> ans;
	string b;
	int comp(string a, string b)
	{
		int x=a.compare(b);
		if(x>0)
			return 0;
		else return 1;
	}
	void permute(string a,int l, int r)
	{
		if(l==r)
		{	
			int x=a.compare(b);
			if(x>0)
				ans.pb(a);
			return;

			// puts(a);
			// return;
		}

		for (int j=l; j<=r; j++)
		{	
			swap(a[l],a[j]);
			permute(a,l+1,r);
			swap(a[l],a[j]);
		}
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
			string a;
			getline(cin,a);
			b=a;
			// for (int i = 0; a[i]!='0'; ++i)
			// {
			// 	b[i]=a[i];
			// }
			// puts(b);
			permute(a,0,a.size()-1);
			sort(ans.begin(), ans.end(), comp);

			for (int i = 0; i < ans.size(); ++i)
			{
				cout<<ans[i]<<"\n";
			}
		}
		return 0;
	}