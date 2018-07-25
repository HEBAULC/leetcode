 #include<iostream>
 #include<vector>
 #include<algorithm>
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
 	int n=nums.size();
 	if(n==1)
 	return nums[0];
 	
 	else
 	{
	 	int i,a[n+1]={0},mx=nums[0],xb1,xb2;
	/* 	for(i=0;i<n;i++)		//找出序列中的最大值 
	 	{
	 		if(nums[i]>mx)
	 		mx=nums[i];
		 }*/
	 	
	 	for(i=1;i<=n;i++)		//求连续的前n个数的和 
	 	{
	 		int sum=0;
	 		for(int j=0;j<=i-1;j++)
	 		{
	 			sum+=nums[j];
			 }
			 a[i]=sum;
		 }
		 
		 /*显示
		 for(i=0;i<=n;i++)		//求连续的前n个数的和 
	 	{
	 		cout<<a[i]<<endl;
		 } */
		 
		 int Max=-9999,Min=9999;
		 for(i=0;i<n;i++)
		 {
		 	for(int j=i+1;j<n+1;j++)
		 	{
		 		if(a[j]-a[i]>Max)	
		 			Max=a[j]-a[i];
		 			//cout<<Max<<endl;
			 }
		 }
		 
		 return Max;
	}
	
}
int main()
{
	//int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
	int arr[2]={-2,1};
	//int arr[8]={1,2,-1,-2,2,1,-2,1};
	//int arr[3]={1,-1,-2};
	//int arr[2]={1,2};
//	int arr[4]={0,-3,1,1};
	
	vector<int> vec(arr, arr + 2);
	int m=maxSubArray(vec);
	cout<<m<<endl;
	/*	 for(i=0;i<n;i++)后来想想与下标无关 
	 	{
	 		if(a[i]>Max)
	 		{
	 			Max=a[i];
	 			xb2=i+1;
			 }
	 		
	 		
	 		if(a[i]<Min)
	 		{
	 			Min=a[i];
	 			xb1=i+1;		//存储下标 
			 }
	 		
		 }
		 
		//if(xb2>xb1){}
		//cout<<mx<<endl;
		if(xb2>xb1)
		{
			if(Min<=0&&Max>Min)
			return Max-Min;
			
			else
			{
				sort(a,a+n);
				return max(a[n-1],mx);
			}
			
		}
			
			
		else
		{
			sort(a,a+n);
			return max(a[n-1],mx);
		}*/ 	    
}
