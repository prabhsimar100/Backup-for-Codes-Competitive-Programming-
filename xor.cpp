#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
	int flag=-1;
	int x=a.size();
	int y=b.size();
	int z=min(x,y);
	for(int i=0;i<z;i++)
		if(a[i]!=b[i])
		{
			flag++;
			break;
		}
	if(flag==-1)
		return b<a;
	else return a<b;
		
}

int main() {
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	//string b[2]={"prabh","prabh"};
	
	sort(a,a+n,comp);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\n";
	return 0;
}
