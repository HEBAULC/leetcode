#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int n) {
        
        if(n == 1){
            return 1;
        }else if(n == 2){
            return 2;
        }else{
            vector<int> buff;
            buff.push_back(1);
            buff.push_back(2);
            for(int i = 2;i < n;++i){
                int temp = buff[i - 1] + buff[i - 2];
                buff.push_back(temp);
            }
            return buff[n-1];
        }

    }
int main()
{
	int n;
	cin>>n; 
	int sum=climbStairs(n);
	cout<<sum<<endl;
}
