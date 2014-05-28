/*
	Polo the Penguin and the Test		
	Problem code: PPTEST
	link:http://www.codechef.com/problems/PPTEST
*/
#include<iostream>
#define MAX(a,b) a>b?a:b
using namespace std;

int main()
{
	int T,n,w,c,p,t,large,dp[105];
	cin>>T;
	while(T--)
	{
		cin>>n>>w;
		for(int i=0;i<=w;i++)
			dp[i]=-100000;
		dp[0]=0;
		while(n--)
		{
			cin>>c>>p>>t;
			for(int i=w;i>=t;i--)
			{
				if(dp[i-t]>=0)
					dp[i]=MAX(dp[i],dp[i-t]+p*c);
			}
		}
		large=dp[0];
		for(int i=1;i<=w;i++)
		{
			large=MAX(large,dp[i]);
		}
		cout<<large<<"\n";
	}
	
	return 0;
}

