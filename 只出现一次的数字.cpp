#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int i,ans=nums[0],l=nums.size();
        for(i=1;i<l;i++)
        	ans^=nums[i];
        	
        return ans;
}
int main()
{
	int arr[5]={4,1,2,1,2};
	vector<int>vec(arr,arr+5);
	int r=singleNumber(vec);
	cout<<r<<endl;
}
