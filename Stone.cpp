/*

Stone
Problem code: RRSTONE
*/
#include<iostream>

using namespace std;

long long CreateNewArray(long long *ar,long size,long long  max)
{
	long long newMax;
	for(long i=0;i<size;i++)
	{
		ar[i]=max-ar[i];
		if(i==0)
			newMax=ar[i];
		else if(newMax<ar[i])
			newMax=ar[i];
	}
	return newMax;
}
void Print(long long *ar,long size)
{
	for(long i=0;i<size;i++)
	{
		cout<<ar[i]<<" ";
	}
}
int main(){
	long n;
	long long k,max=0;
	cin>>n>>k;
	long long ar[n+1];
	for(long i=0;i<n;i++)
	{
			cin>>ar[i];
			if(i==0)
				max=ar[i];
			else if(max<ar[i])
				max=ar[i];
	}
	if(k==0)
	{
		Print(ar,n);	
	}
	else
	{
		max=CreateNewArray(ar,n,max);
		if(k%2)
			Print(ar,n);
		else{
			max=CreateNewArray(ar,n,max);
			Print(ar,n);	
		}
	}	
		
	return 0;
}
