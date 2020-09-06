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

// vector<int> vis;
void dfs(int curr, int par)
{
    cout<<curr<<" ";
    vis[curr]=1;

    for(auto x:gr[curr])
    {
        if(x==par||vis[x])
            continue;
        dfs(x,curr);
    }
}

void bfs(int root)
{
    queue<int> q;
    q.push(root);
    int curr=root;
    while(!q.empty())
    {
        if(vis[q.front()]==1)
        {
            q.pop();
            continue;
        }
        curr=q.front();
        cout<<curr<<" ";
        q.pop();
        vis[curr]=1;
        for(auto x:gr[curr])
            if(vis[x]!=1)
                q.push(x);

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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            {
                int x,y;
                cin>>x>>y;
                gr[x].pb(y);
                gr[y].pb(x);
            }

        dfs(1,-1);
        cout<<endl;
        vis.clear();
        vis.resize(N);
        bfs(1);

       
            
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