#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

vector<int> graph[101];


int bfs(int root)
{
	int distace[101];
	for (int i = 0; i < 102; ++i)
	{
		distace[i]=-1;
	}
	distace[1]=0;
	queue<int> Q;
	Q.push(1);
	while(!Q.empty())
	{
		int cur=Q.front();
		Q.pop();
		for (int i = 0; i < graph[cur].size(); ++i)
		{
			int x=graph[cur][i];
			
			if(x==100)
			{
				return distace[cur]+1;
			}
			if(distace[x]==-1)
			{
				Q.push(x);
				distace[x]=distace[cur]+1;
			}
		}
	}
	return -1;

}

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int t; cin>>t; while(t--)
	{
		int n;
		cin>>n;
		// map<int,int> ladders;
		int board[105];
		memset(board,0,sizeof(board));
		for (int i = 0; i < n; ++i)
		{
			int a,b;
			cin>>a>>b;
			// ladders[a]=b;
			board[a]=b-a;
		}
		// sort(ladders, ladders+n);
		int m;
		cin>>m;
		// map<int,int>snakes;
		for (int i = 0; i < m; ++i)
		{
			int a,b;
			cin>>a>>b;
			// snakes[a]=b;
			board[a]=b-a;
		}

		for (int i = 1; i <=100; ++i)
		{
			for(int j=1;j<=6;j++)
			graph[i].pb(i+j+board[i+j]);
		}

		cout<<bfs(1)<<"\n";
		// sort(snakes, snakes+m);

		for (int i = 0; i < 101; ++i)
		{
			graph[i].clear();
		}
	}
	return 0;
}