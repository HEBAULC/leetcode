#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int l=nums.size();
    int n=l;
    vector<int>::iterator it,itor2;;		//ɾ��Ҫ�õ����� 
    for(it=nums.begin();it!=nums.end();)		//Ҳ�� it<nums.end();++it
    {
    	if(*it==val)
    	{
    		itor2=it;			//����ֱ��ɾ��ԭ���ĵ����� 
    		nums.erase(itor2);
    		n--;				//����߲���it++ 
		}
		
		else			//�����else 
		it++;
	}
	return n;
}
int main()
{
	//int arr[8]={0,1,2,2,3,0,4,2};
	int arr[4]={3,2,2,3};
	vector<int> vec(arr, arr +4);
	removeElement(vec,2);
	int l=vec.size();
	for(int i=0;i<l;i++)
	cout<<vec[i]<<" "; 
}
