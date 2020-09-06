#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

vector<int> size,value;

int dp[1001][1001];

int knapsack(int n, int capacity)		//returns value for n,capacity
{
	
	for(int i=1;i<=n;i++)
		for(int j=0;j<=capacity;j++)
		{
			// if(i==0 || j==0)
			// 	dp[i][j]=0;
			// else if(size[i-1]<=capacity)
			// 	dp[i][j]= max((value[i-1]+dp[i-1][capacity-size[i-1]]),dp[i-1][j]);
			// else dp[i][j]=dp[i-1][j];
		
			if(size[i]>j)
				dp[i][j]=dp[i-1][j];
			else 
				dp[i][j]= max((value[i]+dp[i-1][j-size[i]]),dp[i-1][j]);

		}

		return dp[n][capacity];
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
		int n,s;		//s=capacity
		cin>>n>>s;
		// int size[n],value[n];
		size.resize(n+1);
		value.resize(n+1);
		for (int i = 1; i <=n; ++i)
		{
			cin>>size[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			cin>>value[i];
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<size[i]<<" "<<value[i]<<endl;
		// }
		memset(dp,0,sizeof(dp));

		cout<<knapsack(n,s);
	}
	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define P pair<int,int>
// #define pb push_back

// int n;

// int midsum(int a[], int mid, int l, int r)
// {
// 	int x=mid;
// 	int sum=0,maxsum=0;
// 	while(x>=l)
// 	{
// 		sum+=a[x];
// 		x--;
// 		if(sum>maxsum)
// 			maxsum=sum;
// 	}
// 	x=mid+1;
// 	sum=0;
// 	int maxsum2=0;
// 	while(x<=r)
// 	{
// 		sum+=a[x];
// 		x++;
// 		if(sum>maxsum2)
// 			maxsum2=sum;
// 	}

// 	return maxsum+maxsum2;	
// }

// int maxsum(int a[], int l, int r)
// {
// 	if(l==r)
// 		return a[l];
// 	// if(l>r)
// 	// 	return 0;
// 	int mid=(l+r)/2;
// 	int x,y,z;
// 	x=maxsum(a,l,mid);
// 	y=maxsum(a,mid+1,r);
// 	z=midsum(a,mid,l,r);
// 	// z=0;
// 	// return max(x,y,z);
// 	// cout<<max(x,max(y,z))<<endl;
// 	return max(x,max(y,z));

// }

// int main(){

// 	ios_base:: sync_with_stdio(false);
// 	cin.tie(NULL); cout.tie(NULL);

// 	#ifndef ONLINE_JUDGE
// 	    freopen("input.txt", "r", stdin);
// 	    freopen("output.txt", "w", stdout);
// 	#endif
	
// 	int t; cin>>t; while(t--)
// 	{
// 		cin>>n;
// 		int a[n];
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin>>a[i];
// 		}

// 		cout<<maxsum(a,0,n-1)<<endl;

// 	}
// 	return 0;
// }