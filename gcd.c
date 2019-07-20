#include<stdio.h>
#include<stdlib.h>
//Greatest common divisor
int factor(int *a,int n,int d){ //checking if give no. is factor of all the integers 
	int i;
	for(i=0;i<n;i++){
		if(a[i]%d!=0){
			return 1; //not divisible by all
		}
	}
	for(i=0;i<n;i++){
		a[i]/=d;
	}
	return 0; //divisible by all
}

int gcd(int *a, int n){
	int i,s=a[0],d=1;
	for(i=0;i<n;i++){ //finding the smallest integer s
		if(s>a[i]){
			s=a[i];
		}
	}
	for(i=2;i<=s;i++){ //iterating from 2 to the smallest no. s as gcd can lie between 1 and smallest no.
		if(factor(a,n,i)==0){
			d*=i;
			i--;
		}
		
	}
	return d;
}

int main(int argc, const char* argv[]){
	int i,a[argc-1];
	for(i=0;i<argc-1;i++){
		a[i]=atoi(argv[i+1]);
	}
	printf("%d\n",gcd(a, argc-1));
}
