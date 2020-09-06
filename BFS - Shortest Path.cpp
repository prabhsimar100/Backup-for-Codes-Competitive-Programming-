#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


vector<int> graph[1005];


void bfs(int distance[],int root, int n)
{
	for (int i = 1; i <=n; ++i)
	{
		distance[i]=0;
	}	
	queue<int> Q;
	Q.push(root);
	// for (int i = 0; i < graph[root].size(); ++i)
	// {
	// 	Q.push(graph[root][i]);
	// 	distance[graph[root][i]]=distance[root]+6;
	// }
	
	
	while(!Q.empty())
	{
		int cur=Q.front();
		Q.pop();

		for (int i = 0; i < graph[cur].size(); ++i)
	{
		if(distance[graph[cur][i]]==0&&graph[cur][i]!=root)
		{
			Q.push(graph[cur][i]);
			distance[graph[cur][i]]=distance[cur]+6;
		}
	}
		

	}

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
	
		int n,m,u,v;
		cin>>n>>m;
		int distance[1005];

		for (int i = 0; i < m; ++i)
		{
			cin>>u>>v;
			graph[u].pb(v);
			graph[v].pb(u);

		}
		 int s;
		 cin>>s;

	
		for (int i = 1; i <=n; ++i)
		{
			distance[i]=0;
		}
		distance[s]=0;
		bfs(distance,s,n);

		for (int i = 1; i <=n; ++i)
		{
			if(i!=s)
				if(distance[i]==0)
					cout<<-1<<" ";
				else
					cout<<distance[i]<<" ";
		}
		cout<<endl;
	
		for (int i = 0; i < n; ++i)
			graph[i].clear();

	}
	return 0;
}

// map<int, int> dist;

// 	queue<P>q;
// 	P x;
// 	x.first=root;
// 	x.second=0;
// 	q.push(x);
// 	// dist[x]=0;
// 	dist[x.first]=0;
// 	q.pop();
// 	for(int i=0;i<graph[x.first].size();i++)
// 	{
// 		P a;
// 		a.first=graph[x.first][i];
// 		a.second=x.second+6;
// 		q.push(a);
// 	}
// 	while(!q.empty())
// 	{
// 		P y=q.front();
// 		q.pop();
// 		dist[y.first]=y.second;	
// 		for(int i=0;i<graph[y.first].size();i++)
// 		{
// 		P a;
// 		a.first=graph[y.first][i];
// 		a.second=y.second+6;
// 		if(!dist.count(a.first))
// 			q.push(a);
// 		}

// 	}

// 	for(int i=0;i<dist.size();i++)
// 	{	if(dist[i]==0)
// 			dist[i]=-1;
// 		if(i!=root)
// 		cout<<dist[i]<<" ";}
// 	cout<<endl;
