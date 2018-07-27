#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),i,k;		//记录最短字符串的位置 
        int min=99999;
        string ans;
        for(i=0;i<n;i++)		//找字符串中最短的 
        {
        	if(strs[i].size()<min)
        	{
        		min=strs[i].size();
				k=i;
			}
		}
		
		for(i=0;i<min;i++)		//字符串的下标 
		{
			int tem=1;
			for(int j=0;j<n;j++)	//字符串的个数
			{
				if(j!=k&&strs[j][i]==strs[k][i])
				{
					tem++;
				}
				 
			 } 
			 
			 if(i==0&&tem!=n)
			 break;
			 
			 else if(tem==n)
			 ans+=strs[k][i];
		 } 
		
		return ans;
}
int main()
{
	vector<string> st;
	//st.push_back("flower");
	//st.push_back("flow");
	//st.push_back("flight");
	
	st.push_back("aca");
	st.push_back("bca");
	string ans=longestCommonPrefix(st);
	cout<<ans<<endl;
}
