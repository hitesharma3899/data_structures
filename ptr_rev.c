#include<stdio.h>
#include<stdlib.h>
//reverse the array using pointer
int main(int argc, const char* argv[]){
	int a[argc-1],b[argc-1];
	int *p, i;
	for(i=0;i<argc-1;i++){
		a[i]=atoi(argv[i+1]);
	}
	p=a;
	for(i=argc-2;i>=0;i--){
		b[i]=*(p++);
	}
	for(i=0;i<argc-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
   	return 0;
}
