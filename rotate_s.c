#include<stdio.h>
#include<stdlib.h>
//rotate the array using iteration once per element using recursion
//a[0] is ./a.out, a[1] is no. of rotations, a[2] is direction of rotation i.e. l or r
//a[3] onwards are the elements of array
int rotate_r(int *a,int s,int r){
	int t,i;
	if(r>0){
		t=a[s-1];
		for(i=s-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=t;
		return rotate_r(a,s,--r);
	}
	else{
		return 0;
	}
}
int rotate_l(int *a,int s,int r){
	int t,i;
	if(r>0){
		t=a[0];
		for(i=0;i<s-1;i++){
			a[i]=a[i+1];
		}
		a[s-1]=t;
		return rotate_l(a,s,--r);
	}
	else{
		return 0;
	}
}



int main(int argc, const char* argv[]){
	int i,s=argc-3;
	int a[s],r=atoi(argv[1]);
	r=r%s; // if the no of rotations is greater than size of array then it will minimise the effort as size==rotations will give the same o/p as i/p 
	char d=argv[2][0];
	for(i=0;i<s;i++){
		a[i]=atoi(argv[i+3]);
	}
	if(d=='r'){
		rotate_r(a,s,r);
	}
	else if(d=='l'){
		rotate_l(a,s,r);
	}
	for(i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

