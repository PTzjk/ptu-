#include<bits/stdc++.h>
int fun(int a,int b)//���������ж� 
{
	int t;
	while((b%a)!=0)//�����ظ���mod����������ɸѡ
	{
		t=a;
		a=b%a;
		b=t;
	}
	return a ;//����a����Ϊ�ж�
}
int solve(int n, int k) 
{
	int a,t,i=0;
	double b,m; 
	while((n>=10&&n<=10000)&&(k>=2&&k<=100))//�ж�n��k�Ƿ���� 
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
		return i;//���ؼ�������ֵ	
	}
}
int main()
{
	int n,k,i;
	printf("���һ����������");
	scanf("%d",&n);
	printf("k��ֵ��"); 
	scanf("%d",&k);
	i=solve(n, k);
	printf("%d",i);
	return 0;
}

