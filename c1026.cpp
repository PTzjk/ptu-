#include<bits/stdc++.h>
int fun(int a,int b)//互质数的判断 
{
	int t;
	while((b%a)!=0)//进行重复的mod操作，从中筛选
	{
		t=a;
		a=b%a;
		b=t;
	}
	return a ;//返回a，作为判断
}
int solve(int n, int k) 
{
	int a,t,i=0;
	double b,m; 
	while((n>=10&&n<=10000)&&(k>=2&&k<=100))//判断n，k是否符合 
	{
		for(b=3;b<=n;b++)
			{
				for(a=2;a<b;a++)
				{
				   m=(b-a)/k;
				   if((int)m==m)
				  {
				     t=fun(a,b);
				     if(t==1)
				     i++;
				  }
				}
			}
		return i;//返回计数器的值	
	}
}
int main()
{
	int n,k,i;
	printf("输出一个正整数：");
	scanf("%d",&n);
	printf("k的值："); 
	scanf("%d",&k);
	i=solve(n, k);
	printf("%d",i);
	return 0;
}

