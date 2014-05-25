/*
Chef and Strange Matrix
Problem code: CHEFBM
link:http://www.codechef.com/MAY14/problems/CHEFBM
*/	
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2)
{
	return p1.first<p2.first;
}
int main(){
	
	long n,m,p,i,j,cost;
	vector<pair<int,int> > pos;
	map<pair<int,int>,int> mapP;
	cin>>n>>m>>p;
	//int matrix[n+1][m+1];
	pair<int,int> points;
	while(p--)
	{
		cin>>i>>j;
		mapP[make_pair(i,j)]+=1;
	}
	for(map<pair<int,int>,int >::iterator it = mapP.begin(); it != mapP.end(); ++it) 
	{
		pair<int,int> ij((*it).first);
		if(ij.second!=m && mapP[ij]>=2)
		{
			if(mapP[ij]>mapP[make_pair(ij.first,ij.second+1)]+1)
					mapP[ij]=-1;
		}	
		
    	
	}
	map<int,int> visit;
	for(map<pair<int,int>,int >::iterator it = mapP.begin(); it != mapP.end(); ++it) 
	{
		cost=m-1;
		pair<int,int> ij((*it).first);
		cout<<ij.first<<","<<ij.second<<":"<<mapP[ij]<<endl;
		if(mapP[ij]>0 && visit[ij.first]==0)
		{
			if(ij.second==m)
				cost+=mapP[ij];
			if(mapP[make_pair(ij.first,1)]==1)
				cost-=1;
			visit[ij.first]	=cost;
			cout<<cost<<endl;
		}
		else if(mapP[ij]==-1)
			visit[ij.first]	=-1;
	}
	for(i=0;i<n;i++)
	{
		if(visit[i]==0)
			cout<<m-1<<"\n";
		else if(visit[i]==-1)
			cout<<"-1\n";
		else
			cout<<visit[i]<<"\n";
			
	}
//	cout<<mapP.size();
	return 0;
} 

