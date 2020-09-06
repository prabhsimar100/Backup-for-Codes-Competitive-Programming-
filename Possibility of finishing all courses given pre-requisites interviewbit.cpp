
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 100005;

vector<int> gr[N];
vector<int> vis(N);
int flag=0;
bool cycle;
void cycle_detect(int cur, int par) 
{
    vis[cur] = 1;
    for (auto x : gr[cur]) {
        if (!vis[x]) {
            cycle_detect(x, cur);
        }
        else if (vis[x] == 1) {
            cycle = 1;
        }
    }
    vis[cur] = 2;
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            {
                int x,y;
                cin>>x>>y;
                gr[x].pb(y);
                // gr[y].pb(x);
            }

        for(int i=0;i<n;i++)
        {
            
            cycle_detect(i,-1);
            vis.clear();
            vis.resize(N,0);
            if(cycle)
                break;
        }
        cout<<cycle;

       
            
    }
    return 0;
}

/*
Sample Input:

8 
1 3
2 3
3 4
1 4
4 5
3 5
5 6
1 6

*/