#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back


vector<vector<int> > answer;

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	// int t; cin>>t; while(t--)
	{
		int n; cin>>n; int flag=1,j,sum,count; 
		vector<int> a(n);
		
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int t;
		cin>>t;
		sort(a.begin(), a.end());
		vector<int>::iterator itera;
		itera=unique(a.begin(), a.end());
		a.resize(distance(a.begin(), itera));
		// reverse(a,a+n);
		int x=1<<n;
		for(int i=0;i<x;i++)
		{
			flag=1;
			j=i;
			count=0;
			sum=0;
			vector<int> print;
			while(j>0)
			{
				if(j&1)
					{sum+=a[count];
						print.pb(a[count]);
					}
				count++;
				j=j>>1;

				
			}
			if(sum==t)
				
					{	

							// int2string(print);
						answer.pb(print);
					
					}
			print.clear();
	
		}


		sort(answer.begin(), answer.end());



		for(int i=0;i<answer.size();i++)
		{		if(i>0 && answer[i]==answer[i-1])
					continue;
			for (int j=0;j<answer[i].size();j++)
			{
				cout<<answer[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

