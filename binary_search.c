#include<stdio.h>
int binary(int a[],int n,int x)
{
	int i,j,t,s=0,e=n-1,m=(s+e)/2;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	while(s<=e)
	{
		if(a[m]==x)
		{
			j=0;
			return 1;
			break;
		}
		else if(x<a[m])
		{
			e=m-1;
			m=(s+e)/2;
		}
		else if(x>a[m])
		{
			s=m+1;
			m=(s+e)/2;
		}
	}
	if(j!=0)
	return 0;
}
int main(void)
{
	int n,r,x;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	r=binary(a,n,x);
	if(r==1)
		printf("Element %d is present in the array\n",x);
	else if(r==0)
		printf("Element %d is not present in the array\n",x);
		return 0;
}
