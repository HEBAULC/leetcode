#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int n) {
        
       int ways[] = {1, 1};			//ways[0]��ʾ��n-2��¥�ݵ������ways[1]��ʾ��n-1��¥�ݵ���� 
        for (int i = 1; i < n; i++) {//��ϵΪways[n] = ways[n - 1] + ways[n - 2] 
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
