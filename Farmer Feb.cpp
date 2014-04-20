/*

Farmer Feb
Problem code: POTATOES
link:http://www.codechef.com/APRIL14/problems/POTATOES

*/
#include<stdio.h>
#include<math.h>
int main(){
	bool primeAr[2101]={false};
	for(int i=2;i<=sqrt(2100);i++)	
	{
		if(!primeAr[i])
			for(int j=i*i;j<=2100;j+=i)
				primeAr[j]=true;
	}
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&x,&y);	
		int inx=x+y;
		if(!primeAr[inx])
			inx++;
		while(primeAr[inx])
			inx+=1;
		printf("%d\n",inx-(x+y));
	}
	return 0;
}
