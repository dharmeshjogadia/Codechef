/*
Sums in a Triangle
Problem code: SUMTRIAN
link:http://www.codechef.com/problems/SUMTRIAN
*/
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	int ar[101][101],t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			for(int j=0;j<=i;j++)
				scanf("%d",&ar[i][j]);			
				
		for(int i=n-1;i>0;i--)
			for(int j=0;j<=i;j++)
				ar[i-1][j]+=(ar[i][j]>ar[i][j+1])?ar[i][j]:ar[i][j+1];
		printf("%d\n",ar[0][0]);
	}
	return 0;
}
