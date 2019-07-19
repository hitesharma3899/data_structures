#include<stdio.h>
#include<stdlib.h>
//Reversing the array using recursion
int rev(int *a,int s,int l){
	int t;
	if(s<l){
		t=a[s];
		a[s]=a[l];
		a[l]=t;
		return rev(a,++s,--l);
	}
	else{
		return 0;
	}
}

int main(int argc, const char* argv[]){
	int a[argc-1],i;
	for(i=0;i<argc-1;i++){
		a[i]=atoi(argv[i+1]);
	}
	rev(a,0,argc-2);
	for(i=0;i<argc-1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
