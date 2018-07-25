#include<iostream>
#include<vector>
using namespace std;
int mode(vector<int>& nums, int begin, int end)//分治，用递归
{
        if (begin == end)   //退出递归的条件即题目的解
            return nums[begin];
        else
        {
            int mid = (begin + end) / 2;
            int lift = mode(nums, begin, mid);  //把数组分为左右两边，找出左边的众数，
            int right = mode(nums, mid+1, end); //再找出右边的众数，在进行比较
            
            if (lift == right)//左右两边众数相等，这个数即题目的解
                return lift;
            else    //两边众数不相等，即测出两边众数出现的次数，参数多的就为题目的解
            {
                int liftcount(0);
                int rightcount(0);
                
                //vector<int> ::itretor  
                for (auto data : nums)		//相当于Java foreach  但编译器不认识 
                {
                    if (lift == data)
                        liftcount++;
                    
                    if (right == data)
                        rightcount++;
                }
                if(liftcount > rightcount)
                   return lift;
                else
                    return right;
            }
        }
}
int majorityElement(vector<int>& nums)
{
    return mode(nums, 0, nums.size());
        
}

int main()
{
	int arr[7]={2,2,1,1,1,2,2};
	vector<int> vec(arr,arr+7);
	int zs=majorityElement(vec);
	cout<<zs<<endl;
	
}
