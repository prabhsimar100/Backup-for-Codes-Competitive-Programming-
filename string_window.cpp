	#include<bits/stdc++.h>
	#include<string>
	using namespace std;
	int main() {
		
		string s1,s2;
		int ans=0,flag2=0;
		pair<int,int> p;
			getline(cin,s1);
			getline(cin,s2);
			char a=s2[0];
			char b=s2[s2.length()-1];
			vector<int> a1,b1;
			for(int i=0;i<s1.size();i++)
				{
					if(s1[i]==a)
						a1.push_back(i);
					else if(s1[i]==b)
						b1.push_back(i);
				}
			
			for(int i=0;i<a1.size();i++)
				for(int j=0;j<b1.size();j++)
				{	
					int g=a1[i],h=b1[j];
					int f=0,count=0;	
					if(g> (h-b1.size()))
						continue;
						
						for(int x=g;x<=h;x++)
							{	count++;
								if(s1[x]==s2[f])
									f++;				
													
							}	
						if (f==s2.length())
							{//	cout<<"Valid";	
								if(ans==0)
									{ans=h-g+1;
									 p.first=g;
									 p.second=h;
									}
								if(h-g+1<ans)
									{ans=h-g+1;
									 p.first=g;
									 p.second=h;
									}
							}
					//cout<<i<<" "<<j<<endl;
			/*		int count=0,a=0,flag=-1;;
						if(a1[i] < (b1[j]+s2.length())) //length-1?
							for(int x=a1[i];x<=b1[j];x++)
								{
									if(s1[x]==s2[a])
										{
											count++;
											a++;
											if(a==s2.length())
												flag++;
											cout<<"okay\t";
												
										}
													
								}
							cout<<endl;
					if(ans==0&& count!=0)
					{	ans=count;
						p.first=i;
						p.second=j;
						flag2=10;
					}
					else if(flag!=-1&&count<ans )
						{	ans=count;
							p.first=i;
							p.second=j;
							flag2=10;						
						}
					
				*/	
				}
				//cout<<p.first<<" "<<p.second;
				if(p.second!=0)
					for(int i=p.first;i<=p.second;i++)
						cout<<s1[i];
				else cout<<"No string";
			
			
		return 0;
	}
