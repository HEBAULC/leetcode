#include<stdio.h>
//using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	if(a<0)
	printf("false\n");
	
	else
	{
		int t=a,ans=0;
		while(t)
		{
			ans=ans*10+t%10;
		 	t/=10;
		 } 
		 
		if(ans==a)
		printf("true\n");
		
		else
		printf("false\n");
	}
}
