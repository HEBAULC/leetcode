#include<iostream>
#include<cstdlib> 
#include<vector> 
using namespace std;
int maxSubArray(vector<int>& nums) {
 /*
 * ���������������޳�û������������
 *       ��������������
 *     �����ߩ��������ߩ�
 *     ������������������
 *     ������������������
 *     �����ש������ס���
 *     ������������������
 *     ���������ߡ�������
 *     ������������������
 *     ������������������      Code is far away from bug with the animal's protecting
 *         ����������          ���ޱ���,������bug
 *         ����������
 *         ������������������
 *         �����������������ǩ���
 *         ����������������������
 *         �����������ש�����
 *           ���ϩϡ����ϩ�
 *           ���ߩ������ߩ�
 *
 * �������������о�ɧɧ�թ�����������
 */
    int n,sum,Max=-INT_MAX,a[100001];		//sumΪ���������еĺ� 
    n=nums.size();
    if(n==1)
    return nums[0];
	
	for(int i=1;i<=n;++i)	//Ϊ���鸳ֵ
	{
		a[i]=nums[i-1];
	 } 
	sum=0;
	for(int i=1;i<=n;++i)		//��̬ת�Ʒ��̣�sum[i]=max{sum[i-1],0}+a[i] 
	 {							//�߽�������sum[0]=0 
	 	sum+=a[i];				//���Ӷ�:O(n) 
		 if(sum>Max)
		 Max=sum;
		 
		 if(sum<0&&i!=n)				//&&i!=n  	if(a[i+1]>a[i])
		 	sum=0;	 
	}  
	return Max;
}
int main()
{
	//int arr[8]={1,2,-1,-2,2,1,-2,1};
	int arr[2]={-2,-1};
	vector<int> vec(arr, arr + 2);
	int m=maxSubArray(vec);
	cout<<m<<endl;
}
