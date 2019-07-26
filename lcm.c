#include<stdio.h>
#include<stdlib.h>
int multiple(int *a,int n,int x){
	int i,c=1;
	for(i=0;i<n;i++){
		if(a[i]%x==0 && a[i]!=1){ //divides all possible no. by x
			a[i]/=x;
			c=0; //flag
		}
	}
	return c;
}
int lcm(int *a, int n){
int i,d=1,l=a[0];
for(i=0;i<n;i++){ //finding largest no.
	if(l<a[i]){
		l=a[i];
	}
}
for(i=2;i<=l;i++){
	if(multiple(a,n,i)==0){ //works on flag c returned from multiple
		d*=i;
		i--;
	}
}
for(i=0;i<n;i++){
	d*=a[i];
}
return d;
}
int main(int argc, const char* argv[]){
	int a[argc-1],i;
	for(i=0;i<argc-1;i++){
		a[i]=atoi(argv[i+1]);
	}
	printf("%d\n",lcm(a,argc-1));
	return 0;
}
