#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); ++i) {			//û���ظ�Ԫ�� 
        res ^= (i + 1) ^ nums[i];					//�������±������һ�������������� 
    }												//˼·���±������Ԫ����xor 
    return res;
}
int main()
{
	int arr[9]={9,6,4,2,3,5,7,0,1};
	vector<int> vec(arr,arr+9);
	int ans=missingNumber(vec);
	cout<<ans<<endl;
}
