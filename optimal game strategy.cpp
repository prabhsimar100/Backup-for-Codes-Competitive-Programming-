#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

int n;
int dp[31][31];


int game(int a[], int l, int r)	//for a specific l to r what is your max possible sum
{
	if(l>r)
		return 0;
	if(dp[l][r]!=0)
		return dp[l][r];
	if((r-l)==1)
	{	dp[l][r]=max(a[l],a[r]);
		return max(a[l],a[r]);}

	else
	{
		int x = a[l]+ min(game(a,l+2,r),game(a,l+1,r-1));
		int b = a[r]+ min(game(a,l,r-2),game(a,l+1,r-1));
		dp[l][r]=max(x,b);
		return max(x,b);
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
		cin>>n;
		int a[n+5];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];	
		}
		cout<<game(a,0,n-1);

	}
	return 0;
}