#include<iostream> 
#include<vector>
using namespace std;/*		�Լ��Ľⷨ 
int removeDuplicates(vector<int>& nums) {
    int n=nums.size(),i,N=1;
    if(n==0)
    return 0;
    
	vector<int> v1;
	v1.push_back(nums[0]);
	for(i=1;i<n;i++)
	{
		if(nums[i]!=nums[i-1])
		{
			v1.push_back(nums[i]);
			N++;
		}
	}
	
	nums.swap(v1);
	//cout<<N<<endl;
    return N;
}*/
//˫ָ�뷨 
int removeDuplicates(vector<int>& nums)
{
	if (nums.size()== 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {		//i����ָ�룬j�ǿ�ָ�� �����j++�������i++�ٸ�ֵ,j++ 
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
int main()
{
	//int arr[10]={0,0,1,1,1,2,2,3,3,4};
	int arr[3]={1,1,2};
	vector<int> vec(arr, arr + 3);
	removeDuplicates(vec);
	int l=vec.size();
	for(int i=0;i<l;i++)
	cout<<vec[i]<<" "; 
	
	
 } 
