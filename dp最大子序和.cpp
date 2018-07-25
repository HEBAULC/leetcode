#include<iostream>
#include<cstdlib> 
#include<vector> 
using namespace std;
int maxSubArray(vector<int>& nums) {
 /*
 * ━━━━━━神兽出没━━━━━━
 *       ┏┓　　　┏┓
 *     ┏┛┻━━━┛┻┓
 *     ┃　　　　　　　┃
 *     ┃　　　━　　　┃
 *     ┃　┳┛　┗┳　┃
 *     ┃　　　　　　　┃
 *     ┃　　　┻　　　┃
 *     ┃　　　　　　　┃
 *     ┗━┓　　　┏━┛      Code is far away from bug with the animal's protecting
 *         ┃　　　┃          神兽保佑,代码无bug
 *         ┃　　　┃
 *         ┃　　　┗━━━┓
 *         ┃　　　　　　　┣━┓
 *         ┃　　　　　　　┏━┛
 *         ┗┓┓┏━┳┓┏┛
 *           ┃┫┫　┃┫┫
 *           ┗┻┛　┗┻┛
 *
 * ━━━━━━感觉骚骚哒━━━━━━
 */
    int n,sum,Max=-INT_MAX,a[100001];		//sum为连续子序列的和 
    n=nums.size();
    if(n==1)
    return nums[0];
	
	for(int i=1;i<=n;++i)	//为数组赋值
	{
		a[i]=nums[i-1];
	 } 
	sum=0;
	for(int i=1;i<=n;++i)		//动态转移方程：sum[i]=max{sum[i-1],0}+a[i] 
	 {							//边界条件：sum[0]=0 
	 	sum+=a[i];				//复杂度:O(n) 
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
