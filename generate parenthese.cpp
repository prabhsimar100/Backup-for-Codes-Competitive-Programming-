#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

vector<string> ans;
int n;
void func(string s,int l, int r)
{
    if(r==n)
    {
        ans.pb(s);
        return;
    }
    if(l<n)
    {
        s+='(';
        func(s,l+1,r);
        s.pop_back();
    }
    if(r<l)
    {
        s+=')';
        func(s,l,r+1);
        s.pop_back();
    }

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
        cin>>n;
        string s="";
        func(s,0,0);

        for(auto x:ans)
            cout<<x<<"\n";


            
    }
    return 0;
}