#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	int a[n];
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	deque<int> q;
	for(int i=0;i<k;i++)
	{
		while(!q.empty() && a[q.back()] > a[i])
			{
				q.pop_back();
			}
		q.push_back(i);
	}
	cout<<a[q.front()]<<"first element\n";
	//First window has now been completed
	for(int i=k;i<n;i++)
	{
		while(!q.empty() && a[q.back()] > a[i])
			{
				q.pop_back();
			}
		q.push_back(i);
		if(q.front()==i-k)
			q.pop_front();
		cout<<a[q.front()]<<"is the minimum for this window\n";
	}
	
}
