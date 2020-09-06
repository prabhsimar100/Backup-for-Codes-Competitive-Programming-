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
        int n,k,l=0,r=0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

    vector<int> zero;
    zero.pb(-1);
    // zero.pb()
    for(int i=0;i<a.size();i++)
    {
        if(!a[i])
            zero.pb(i);
    }
    zero.pb(n);
    // for(auto x:zero)
    //     cout<<x<<" ";
    if(zero.size()-2<=k)
    {
        // cout<<"sfsf";
        for(int i=0;i<a.size();i++)
             a[i]=i;
        // return a;
    }
    else 
    {
        // int curr=0;   
        for(int i=0;i+k+1<zero.size();i++)
        {
            int l1=zero[i];
            int r1=zero[i+k+1];
            int curr=r1-l1-1;
            if(curr>r-l-1)
            {
                l=l1;
                r=r1;
            }
        }
       cout<<l+1<<" "<<r-1;
        // cout<<a[l]<<" "<<a[r];

    }
            
    }
    return 0;
}