/*
B. Taxi
link:http://codeforces.com/problemset/problem/158/B
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b?true:false;
}
int main(){
	
	long n,i,j,sum,cars;
	
	cin>>n;
	int group[n+1];
	cars=sum=0;
	for(i=0;i<n;i++)
	{
		cin>>group[i];
		
	}
	sort(group,group+n,compare);
	
	i=0;
	//group length 4;
	while(group[i]==4)
	{
		cars++;
		i++;	
	}
	//cout<<"4:"<<cars<<endl;
	//group lenght 3 and 1
	j=n-1;
	//cout<<"\ni:"<<i;
	while(group[i]==3)
	{
		cars++;
	//	cout<<"\ni:"<<i;
		i++;
		if(group[j]==1)
			j--;
		
		
	}
	//cout<<"\n3:"<<cars<<endl;
	//group lenght 2 and 2
	while(group[i]==2 && group[i+1]==2)
	{
				cars++;
				i+=2;
	}
	
///cout<<"2:"<<cars<<endl;
	//group lenght 2 and 1
	while(group[i]==2)
	{
		if(group[j]==1)
			j--;
		if(group[j]==1)
			j--;
		cars++;
		i++;
	}
//	cout<<"21:"<<cars<<endl;
	int tmpCnt=0;	
	while(i<=j)
	{
		tmpCnt++;
		i++;
		if(tmpCnt==4)
		{
			tmpCnt=0;
			cars++;
		}
	}
	if(tmpCnt)
		cars++;
	cout<<cars;
	return 0;
}

