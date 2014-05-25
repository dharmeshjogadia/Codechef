/*
Chef-jumping
Problem code: OJUMPS
*/
#include<iostream>
using namespace std;
	
int main(){
	unsigned long long a;
	cin>>a;
	short mod=a%6;
	if(mod==0 || mod==1 || mod==3 )
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}
