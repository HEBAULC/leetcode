#include<iostream>
#include<vector>
using namespace std;
int mode(vector<int>& nums, int begin, int end)//���Σ��õݹ�
{
        if (begin == end)   //�˳��ݹ����������Ŀ�Ľ�
            return nums[begin];
        else
        {
            int mid = (begin + end) / 2;
            int lift = mode(nums, begin, mid);  //�������Ϊ�������ߣ��ҳ���ߵ�������
            int right = mode(nums, mid+1, end); //���ҳ��ұߵ��������ڽ��бȽ�
            
            if (lift == right)//��������������ȣ����������Ŀ�Ľ�
                return lift;
            else    //������������ȣ�����������������ֵĴ�����������ľ�Ϊ��Ŀ�Ľ�
            {
                int liftcount(0);
                int rightcount(0);
                
                //vector<int> ::itretor  
                for (auto data : nums)		//�൱��Java foreach  ������������ʶ 
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
