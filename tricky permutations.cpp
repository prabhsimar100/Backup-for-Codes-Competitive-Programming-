#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

vector<string> ans;

void permute(string a,int l, int r)
{
	if(l==r)
		{ans.pb(a);
			return;}

	for (int j=l; j<=r; j++)
		// if(a[l]!=a[j] || j==l)
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
		permute(a,0,a.size()-1);
		sort(ans.begin(), ans.end());
		vector<string>::iterator it;
		it=unique(ans.begin(), ans.end());
		ans.resize(distance(ans.begin(), it));
		for(it=ans.begin();it!=ans.end();it++)
		{
			cout<<*it<<"\n";
		}

	}
	return 0;
}