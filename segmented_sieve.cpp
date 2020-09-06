#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back


ll a,b;


const int N = 100005;

ll p[N]={0};
vector<ll> primes;

void seive()
{
	primes.pb(2);
	for(ll i=3;i<=N;i+=2)
	{
		if(!p[i])
		{	primes.pb(i);
			for(ll j=i*i; j<=N; j=j+2*i)
				p[j]++;
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
	seive();
	int t; cin>>t; while(t--)
	{
		ll start,x;
		cin>>a>>b;
		ll n = b-a+1;

		int segment[n]={1};
		
		 for (ll i = 0; i < n; i++) {
            segment[i] = i + a;
        }
			for(ll y=0;y<primes.size();y++)
			{
				x=primes[y];

				if(x*x>b)
					continue;
				// start = (a/x)*x;
				// if(start>=a)
				// 	start*=2;

				// if(start==1)
				// 	segment[start-a]++;
				// for(ll i=start;i<=b;i+=x)
				// {
				// 	if(i<a)
				// 		continue;

				// 	segment[i-a]++;

				// }		

				if(x>=a)
					{start=x*2;
						
					}

				else start=(a/x)*x;

				for (ll i = start; i <= b; i += x) {
                if (i < a) continue;
                segment[i - a] /= x;
            }

				// for(ll j=a;j<=b;j++)
				// {
				// 	if(j==x)
				// 		continue;
				// 	if(j%x==0)
				// 		segment[j-a]=0;


				// }

			}
			// for(ll i=a;i<=b;i++)
			// 	if(segment[i-a]==1)
			// 		cout<<i+a<<"\n";
			  for (ll i = 0; i < n; i++) {
            if (i + a == 1 || segment[i] != a + i) continue;
            cout << segment[i] << "\n";
        }

			// for(ll i=a;i<=b;i++)
			// {	if(segment[i-a])
			// 		cout<<i<<"\n";}

			cout<<"\n";	

	}
	return 0;
}