#include<bits\stdc++.h>
using namespace std;
#define v 2^31-1
int solve(int* a, int n, int k) //n��ʾ����a�ĳ���
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
}// ��������ǰ������Ԫ�������һλ��Ӳ��жϣ��ظ����� 

int main()
{
	int n;
	printf("�������鳤��n��");
	scanf("%d",&n);
	if(n<1&&n>10^5)
	printf("n�������"); 
	int a[n],b[v];
	 for (int i=0; i<n; i++)
    {	
        scanf("%d",&a[i]);
        if(a[i]<1&&a[i]>10^6)
		printf("a[i]�������"); 
    }
	int k;
	printf("k=");
	scanf("%d",&k);//����k 
	if(k>=1&&k<=10^6)
	{
		printf("%d",a[solve(a,n,k)]);
	}
	return 0;
}

