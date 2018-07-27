#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
        int l1=g.size(),l2=s.size();
        if(l1==0||l2==0) return 0;
        
        int n,N=0,i;
        n=l1<=l2?l1:l2;
        sort(g.begin(),g.end());		//由小到大排序 
        sort(s.begin(),s.end());
        int k=0,j;
        while(s[k]<g[0]) k++;
        if(k==l2)	return 0;		//l2越界，不是l2-1 
        
        for(i=k,j=0;i<l2;i++)		//是j和n比较，不是i 
        {
        	if(s[i]>=g[j])
        	{
        		N++;
        		j++;
        		if(j==l1)
        		break;	//处理孩子少时的越界情况 
			}
		}
		return N; 
}
int main()
{
	//int arr1[3]={1,2,3};
	//int arr2[2]={1,1};
	//int arr1[4]={10,9,7,8};
	//int arr2[4]={5,6,7,8};
	
	int arr1[2]={1,2};
	int arr2[3]={1,2,3};
	vector<int> vec1(arr1, arr1 + 2);
	vector<int> vec2(arr2, arr2 + 3);
	int n=findContentChildren(vec1,vec2);
	cout<<n<<endl;
}
