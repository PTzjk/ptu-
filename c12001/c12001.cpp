#include<bits\stdc++.h>
using namespace std;
#define v 2^31-1
int solve(int* a, int n, int k) //n表示数组a的长度
{	
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]+a[i]==k) 
			{	
				return j;
			}
		}	
	}
}// 遍历，将前面数组元素与最后一位相加并判断，重复操作 

int main()
{
	int n;
	printf("输入数组长度n：");
	scanf("%d",&n);
	if(n<1&&n>10^5)
	printf("n输入错误"); 
	int a[n],b[v];
	 for (int i=0; i<n; i++)
    {	
        scanf("%d",&a[i]);
        if(a[i]<1&&a[i]>10^6)
		printf("a[i]输入错误"); 
    }
	int k;
	printf("k=");
	scanf("%d",&k);//输入k 
	if(k>=1&&k<=10^6)
	{
		printf("%d",a[solve(a,n,k)]);
	}
	return 0;
}

