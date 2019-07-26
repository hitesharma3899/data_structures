#include<stdio.h>
#include<stdlib.h>
//find element at index in fibonacci series using recursion
int fibo(int a){
	if(a<=1)
		return a;
	return fibo(a-1)+fibo(a-2);
}
int main(int argc, const char* argv[]){
	printf("%d\n",fibo(atoi(argv[1])));
	return 0;
}
