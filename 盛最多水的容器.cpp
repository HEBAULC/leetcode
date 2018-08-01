#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
     int maxarea=0,i,l,area=0;			//双指针法 
	 l=height.size();
	 int L=0,R=l-1;
	 while(L<R)
	 {
	 	area=min(height[L],height[R])*(R-L);
	 	if(area>maxarea)
	 	{
	 		maxarea=area;
		 }
		 
		 if(height[L]<=height[R]) L++;		//高度小的往大的一边靠 
	  	 else R--;
	  } 
	  
	  return maxarea;
	    
}
int main()
{
	int arr[9]={1,8,6,2,5,4,8,3,7};
	vector<int> vec(arr,arr+9);
	int m=maxArea(vec);
	cout<<m<<endl;
}
