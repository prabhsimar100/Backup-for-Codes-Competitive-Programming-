#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

// priority_queue<ll> q;
priority_queue<ll,vector<ll>,greater<ll> >q;

void show()
{
	vector<ll> v;
			while(!q.empty())		
			{
				
				v.push_back(q.top());
				cout<<q.top()<<"\t";
				q.pop();

			}
			// cout<<q.top()<<"\n";
			for(int i=0;i<v.size();i++)
			{
				q.push(v[i]);
			}

			cout<<endl;
			v.clear();
}

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	ll t,k; cin>>t>>k; while(t--)
	{
		ll a;
		cin>>a;
		if(a==1)
		{
			ll x,y;
			cin>>x>>y;
			ll d= (x*x) + (y*y);
			q.push(d);

			// show();

		}

		else
		{
			vector<ll> v;
			// for(int i=1;i<k;i++)		//k-1 times
			// {
			// 	vector<ll> v;
			// 	v.push_back(q.top());
			// 	q.pop();

			// }
			// cout<<q.top()<<"\n";
			ll i=1;
			while(i<=k-1)		
			{
				i++;	
				
				v.push_back(q.top());
				// cout<<q.top()<<"\t";z
				q.pop();

			}
			cout<<q.top()<<"\n";
			// cout<<v[k-1]<<"\n";
			for(int i=0;i<v.size();i++)
			{
				q.push(v[i]);
			}

			v.clear();

		}
		
	}
	return 0;
}