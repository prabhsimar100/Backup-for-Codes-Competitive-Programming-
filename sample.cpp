#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second




int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    //int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];       

       
        vector<int> dp(n,-1);
       

        dp[n-1]=a[n-1];
        dp[n-2]=a[n-2];

        for(int i=n-1;i>=0;i--)
        {
            if(i-2>=0)
            {
                if(dp[i-2]==-1)
                    dp[i-2]=dp[i]+a[i-2];
                else
                    dp[i-2]=min(dp[i-2],dp[i]+a[i-2]);

            }
            if(i+1<n)
            {
                if(dp[i+1]==-1)
                    dp[i+1]=dp[i]+a[i+1];
                dp[i+1]=min(dp[i+1],dp[i]+a[i+1]);

            }
        }


       for(auto x:dp)
        cout<<x<<" ";   
        

    }
    return 0;
}

