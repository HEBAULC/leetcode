#include<iostream>
#include<vector>
#include<algorithm>
#include<assert.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    int i,l=nums.size(),N=0,ans=-1,Flag=0;
    vector<int> v;
    for(i=0;i<l;i++)		//ȥ��������������һ��vector 
    {
    	if(nums[i]>0)
		{
			v.push_back(nums[i]);
			N++;
		 } 
	} 
	
	vector<int>::iterator new_end,it;
	sort(v.begin(),v.end());   //��С�������� 
    new_end=unique(v.begin(),v.end());    //"ɾ��"���ڵ��ظ�Ԫ��,�����������ź�˳��� 
    assert(v.size()==N);		//����쳣 
    v.erase(new_end,v.end());  //ɾ����������ɾ�����ظ���Ԫ��
    
  /*  it=v.begin();
    while(it!=v.end())
    {
    	cout<<*it<<endl;
    	++it;
	}*/
    N=v.size(); 
    //cout<<N<<endl;
	for(i=0;i<N;i++)
	{
		if(v[i]>i+1)
		{
			//cout<<v[i]<<endl;
			ans=i+1;	
			Flag=1;
			break;
		}	
	}
	
	if(Flag==0)
	{
		ans=N+1;
		
	}
	
	return ans;
	
}
int main()
{
	//int arr[3]={1,2,0};
	//int arr[4]={3,4,-1,1};
	int arr[8]={4,3,4,1,1,4,1,4};
	vector<int> vec(arr,arr+8);
	int ans=firstMissingPositive(vec);
	cout<<ans<<endl;
 } 
