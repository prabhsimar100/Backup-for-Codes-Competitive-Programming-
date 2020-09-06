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
        string a;
        string b;
        cin>>a>>b;

        if(b.size()==0||a.size()==0)
        {
            cout<<"-1\n";
            return -1;
        }

        int lps[b.size()];

        lps[0]=0;
        int len=0;
        int i=1,n=b.size();
        while(i<n)
        {
            if(b[i]==b[len])
            {
                len++;
                lps[i]=len;
                i++;
                
            }
            else if(len)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }

        for(auto x:lps)
            cout<<x<<" ";
        cout<<endl;
        int j=0;
        i=0;
        while(i<a.size())
        {
            // cout<<i<<" "<<j<<endl;
            if(a[i]==b[j])
            {
                i++;
                j++;
                if(j==b.size())
                {
                    cout<<i-j<<endl;
                    j=lps[j-1];
                }
                continue;
            }
            
            if(j!=0)
                j=lps[j-1];
            else i++;
        }

        

    }
    return 0;
}