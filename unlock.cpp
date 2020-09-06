#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll int n,k,x;
map<int,int> m;



int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
		cin>>n>>k;
		//map<int,int>::iterator x;
	ll int a[n], temp,temp2,count=0;
	for(ll int i=0;i<n;i++)
	{		cin>>a[i];
			m[a[i]]=i;

	}
	// for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
 //    		cout << it->first << " => " << it->second << '\n';
	
	for(ll int i=0;i<n;i++)
	{
		if(count==k)
			break;

		if(a[i]!=n-i)
			{	
					temp=a[i];
					a[i]=n-i;
					a[m[n-i]]=temp;
					count++;
					temp2=m[temp];
					m[temp]=m[n-i];
					m[n-i]=temp2;		
				
			}
			
			
			

	}

	for(ll int i=0;i<n;i++)
		cout<<a[i]<<" ";	

	}
	return 0;
}
