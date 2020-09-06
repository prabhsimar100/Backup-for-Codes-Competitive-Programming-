//To compute Z-Array for a string.
//Read applications from cp-algorithms/gfg for pattern matching
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

//Each position represents the largest length of string starting from that position
//which is also a prefix of the array
vector<int> compute(string s)
{
    int n=s.size();
    vector<int> z(n);
    z[0]=0;
    int l=0,r=0;
    for(int i=1;i<n;i++)
    {
        if(i>r)
        {
            l=r=i;
            while(r<n&&s[r-l]==s[r])
                r++;
            z[i]=(r-l);
            r--;
        }
        else
        {
            int k=i-l;              //position from the start which is inside the box
            int gg=z[k]+i;
            if(gg<=r)
            {
                z[i]=z[k];
            }   
            else
            {
                l=i;
                while(r<n&&z[r]==z[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
    }
    return z;
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    //int t; cin>>t; while(t--)
    {
        string s;
        cin>>s;
        vector<int> z=compute(s);
        for(auto x:z)
            cout<<x<<" ";
        cout<<endl;            
    }
    return 0;
}