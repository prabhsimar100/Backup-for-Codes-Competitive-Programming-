#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<int,int>
#define pb push_back

const int size = 2;
const int mod = 1e9 + 7;

struct Mat
{
	int m[size][size];

	Mat()
	{
		memset(m, 0, sizeof m);
	}
 
	void identity()
	{
		for(int i=0;i<size;i++)
			m[i][i]=1;
	}


	Mat operator * (const Mat &a) const
	{
		Mat ans;
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				for (int k = 0; k < size; ++k)
				{
					ans.m[i][j]= (ans.m[i][j]+(m[i][k]*1ll*a.m[k][j]))%mod;
					//The 1ll part is important,will get a wrong answer in bigger test cases without it
				}
			}
		}
		return ans;
	}
};
// struct Mat
// {
// 	int m[sz][sz];
 
// 	Mat()
// 	{
// 		memset(m, 0, sizeof m);
// 	}
 
// 	void eye()
// 	{
// 		for (int i = 0; i < sz; i++)
// 			m[i][i] = 1;
// 	}
 
// 	Mat operator* (const Mat &a) const
// 	{
// 		Mat r;
// 		for (int i = 0; i < sz; i++)
// 			for (int j = 0; j < sz; j++)
// 				for (int k = 0; k < sz; k++)
// 					r.m[i][j] = (r.m[i][j] + m[i][k] * 1ll * a.m[k][j]) % mod;
// 		return r;
// 	}
// };



int fib(int n)
{
	//F(n)=F(1)*T^n-1

	Mat ans,T;
	ans.identity();
	//T^n-1
	T.m[0][0]=T.m[0][1]=T.m[1][0]=1;
	// n--;
	while(n>0)
	{
		if(n&1)
			ans=ans*T;
		
		T= T*T;
		n>>=1;
	}
	return ans.m[0][0];
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
		cout<<fib(n-1)<<endl;

	}
	return 0;
}

