#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int l=nums.size();
    int n=l;
    vector<int>::iterator it,itor2;;		//删除要用迭代器 
    for(it=nums.begin();it!=nums.end();)		//也行 it<nums.end();++it
    {
    	if(*it==val)
    	{
    		itor2=it;			//不能直接删除原来的迭代器 
    		nums.erase(itor2);
    		n--;				//这里边不能it++ 
		}
		
		else			//必须加else 
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
