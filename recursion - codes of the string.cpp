#include<bits/stdc++.h>
#include<string>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

int n;
string prin;
vector<string> ans;
void COS(vector<int> s, int i)
{
	// cout<<"Ithe";
	// cout<<i;
	// cout<<n;
	if(i==n-1)
	{
		// cout<<"abc";
		char x= 'a' + s[i]-1;
		prin.pb(x);
		// for(int z=0;z<prin.size();z++)
		// {
		// 	cout<<prin[z];
		// }		
		// cout<<"\n";
		ans.pb(prin);
		// prin.erase(prin.begin()+i);
		// prin.pop_back();
		prin.resize(prin.size()-1);
		return;
	}
	if(i==n-2)
	{
		// cout<<"abc";

		char temp='a'+s[i]-1;
		prin.pb(temp);
		COS(s,i+1);
		// prin.erase(prin.begin()+i);
		// prin.pop_back();
		prin.resize(prin.size()-1);


		int num=(s[i]*10 + s[i+1]);
		if(num<=26)
			{
			char x= 'a' + num-1;
			prin.pb(x);
			// for(int z=0;z<prin.size();z++)
			// {
			// 	cout<<prin[z];
			// }		
			
			// cout<<"\n";
		ans.pb(prin);

			// prin.erase(prin.begin()+i);
			// prin.pop_back();
		prin.resize(prin.size()-1);


			return;
			}
	}


		char temp='a'+s[i]-1;
		prin.pb(temp);
		COS(s,i+1);
		// prin.erase(prin.begin()+i);
		// prin.pop_back();
		prin.resize(prin.size()-1);


		int num=(s[i]*10 + s[i+1]);
		if(num<=26)
			{
				char x= 'a' + num-1;
				prin.pb(x);
				COS(s,i+2);
				// prin.erase(prin.begin()+i);
		// prin.pop_back();
		prin.resize(prin.size()-1);


			}

	



}

int main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
		cin>>n;
		int temp=n;
		vector<int> s;
		while(temp>0)
		{
			s.pb(temp%10);
			temp/=10;
		}
		reverse(s.begin(), s.end());
		n=s.size();
		
		COS(s,0);
		cout<<"[";

		    // vector<string>::iterator ip; 
		    // ip = unique(ans.begin(), ans.end());
		    // ans.resize(distance(ans.begin(), ip)); 
 

		int z;
		for(z=0;z<ans.size()-1;z++)
			cout<<ans[z]<<", ";
		cout<<ans[z]<<"]";



	}
	return 0;
}