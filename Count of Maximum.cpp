/*
Count of Maximum

Problem code: MAXCOUNT
link:http://www.codechef.com/problems/MAXCOUNT/
*/
#include<iostream>
using namespace std;
int main()
{
	int t,n,maxFreq,maxNum=-1,tmp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int FreqAr[10001]={0};
		maxFreq=-1;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			FreqAr[tmp]++;
			if(maxFreq<FreqAr[tmp])
			{
				maxFreq=FreqAr[tmp];
				maxNum=tmp;
			}
			else if(maxFreq==FreqAr[tmp] && tmp<maxNum)
				maxNum=tmp;
		}
		
		cout<<maxNum<<" "<<maxFreq<<"\n";
	}
	return 0;
}
