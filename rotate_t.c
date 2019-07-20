#include<stdio.h>
#include<stdlib.h>
//giving cli input at index0, give no. of rotations at index1, then direction of rotation and then array elements starting from index3
//this approach decreases the time complexity of the code
int r_rotate(int *a,int s,int r){
	int c=s-1,i,b[r];
	for(i=r-1;i>=0;i--){ //shifting last elements to temp b[] array
		b[i]=a[c];
		c--;
	}
	for(i=c;i>=0;i--){ //shifting rest of elements to r places right
		a[i+r]=a[i];
	}
	for(i=0;i<r;i++){ //placing temp array at start of a[]
		a[i]=b[i];
	}
	return 0;
}
int l_rotate(int *a,int s,int r){ 
int i,c=0,b[r];
for(i=0;i<r;i++) //inserting elements in temp array b
{
	b[i]=a[i];
}
for(i=r;i<s;i++){ //shifting rest of the elements of array to beginning by count of rotations
	a[i-r]=a[i];
}
for(i=s-r;i<s;i++){ //inserting temp array values at the start of array a[]
	a[i]=b[c];
	c++;
}
return 0;
}

int main(int argc, const char* argv[]){
	int i,s=argc-3,a[s],rotation=atoi(argv[1]);
	int r=rotation%s; // if the no of rotations is greater than size of array then it will minimise the effort as size==rotations will give the same o/p as i/p 
	char d=argv[2][0];
	for(i=0;i<s;i++){
		a[i]=atoi(argv[i+3]);                                                                               

	}
	if(d=='r'){
		r_rotate(a,s,r);
	}
	else if(d=='l'){
		l_rotate(a,s,r);
	}
	else{
		printf("Error");
	}
	for(i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
