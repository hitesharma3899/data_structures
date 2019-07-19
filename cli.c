#include<stdio.h>
int main(int argc, const char *argv[])
{
	char a[]={'a','b','c','d','\0'};
	char *ptr=a;
	printf("%s", ptr);
}
