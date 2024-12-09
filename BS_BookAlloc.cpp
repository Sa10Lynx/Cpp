#include <bits/stdc++.h> 

bool SolPossible(int n, int m, vector<int> time, int mid){
	int dayCount=1;
	int chapCount=0;
	for(int i=0;i<m;i++){
		if(chapCount+time[i]<=mid){
			chapCount=chapCount+time[i];
		}
		else{
			dayCount++;
			if(dayCount>n || time[i]>mid){
				return false;
			}
			chapCount=time[i];
		}
	}
	return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int s=0;
	int sum=0;
	for(int i=0;i<m;i++){
		sum=sum+time[i];
	}
	int e=sum;

	int ans=e;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(SolPossible(n,m,time,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}

	}
	return ans;
}