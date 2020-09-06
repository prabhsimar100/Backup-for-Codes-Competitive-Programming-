#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back

int32_t main(){

  ios_base:: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
  #endif
  
  int t; cin>>t; while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s="";
    for(int i=0;i<n-2;i++)
    {
      s+='a';
    }
    s+='b';
    s+='b';

    for(int i=1;i<k;i++)
    {
    	next_permutation(s.begin(),s.end());
    }

    cout<<s<<"\n";
    s.erase();

  }
  return 0;
}