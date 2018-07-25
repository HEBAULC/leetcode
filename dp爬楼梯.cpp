#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int n) {
        
       int ways[] = {1, 1};			//ways[0]表示爬n-2阶楼梯的情况，ways[1]表示爬n-1阶楼梯的情况 
        for (int i = 1; i < n; i++) {//关系为ways[n] = ways[n - 1] + ways[n - 2] 
            int temp = ways[1];
            ways[1] += ways[0];
            ways[0] = temp;
        }
        return ways[1];


    }
int main()
{
	int n;
	cin>>n; 
	int sum=climbStairs(n);
	cout<<sum<<endl;
}
