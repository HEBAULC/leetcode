#include<iostream>
#include<vector>
using namespace std;
int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    int l=n+2;
    int a[l],i;
	for(i=0;i<l;i++)	//初始化花费数组，边界值为0 
	{
		if(i==0||i==l-1)
		a[i]=0;
		
		else
		a[i]=cost[i-1];
	}
	
	int mincost[l]={0};		//从第0阶开始算 

	for(i=1;i<l;i++)
	{
		if(i==1)
		mincost[i]=a[i];
		
		else
		{
			mincost[i]=min(mincost[i-1],mincost[i-2])+a[i];
		}
	}
	
	return mincost[l-1];
}
int main()
{
	int arr[]={1,100,1,1,1,100,1,1,100,1};
	vector<int> vec(arr, arr + 10);
	int min=minCostClimbingStairs(vec);
	cout<<min<<endl;
}
