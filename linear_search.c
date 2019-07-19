#include<stdio.h>
int linear(int a[],int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
			{ return 1;
break;}
		return 0;
	}
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
	r=linear(a,n,x);
	if(r==1)
		printf("Element %d is present in the array\n",x);
	else
		printf("Element %d is not present in the array\n",x);
}
