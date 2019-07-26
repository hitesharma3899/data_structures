#include<stdio.h>
#include<stdlib.h>
void fibo(int a){
	int i,f=0,p=1,t=0;
	for(i=2;i<a;i++){
		printf("%d ",f);
		t=f;
		f+=p;
		p=t;
	}
	printf("\n");
}
int main(int argc, const char* argv[]){
	int a=atoi(argv[1]);
		fibo(a);
		return 0;
}
