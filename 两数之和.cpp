#include<iostream>
#include<map>
#include<vector> 
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hashmap;
        int l=nums.size(),i;
        for(i=0;i<l;i++)
        {
        	hashmap[nums[i]]=i;		//对哈希表赋值 
		}
		int xb1=0,xb2=0,t; 
		for(i=0;i<l;i++)
        {
        	t=target-nums[i];
        	if(hashmap.find(t)!=hashmap.end())	//找到了 
        	{
        		map<int,int>::iterator it=hashmap.find(t);
        		int k=it->second;		//没有括号 
        		if(i!=k)		//不相同 
        		{
        			xb1=i;
	        		xb2=k;
	        		break;
				}
			}	
		}
		vector<int> vt;
		vt.push_back(xb1);
		vt.push_back(xb2);
		return vt;
}
int main()
{
	//int arr[4]={2, 7, 11, 15};
	int arr[3]={3,2,4};
	vector<int> vec(arr,arr+3),v1;
	v1=twoSum(vec,6);//for(int i=0;i<2;i++)
 	
 	cout<<v1[0]<<" "<<v1[1]<<endl;
 	
 	
 } 
