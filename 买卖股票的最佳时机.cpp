#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int l=prices.size(),i;
	if(l>1)
	{
		int pro[100000]={1};			//�洢��ͬ״̬��������� 
		pro[0]=0;
		int m=-1;
		for(i=1;i<l;i++)		//�ӵڶ������ۿ�ʼ 
		{
			pro[i]=max(prices[i]-prices[i-1]+pro[i-1],0);
			if(pro[i]>m)
			m=pro[i];
					
		}    
		return m;  	
	}
	
	else
		return 0;
	  
}
int main()
{
	//int arr[6]={7,1,5,3,6,4};
	//int arr[5]={7,6,4,3,1};
	int arr[1]={1};
	vector<int> vec(arr, arr + 1);
	int max=maxProfit(vec);
	cout<<max<<endl;
	
}
