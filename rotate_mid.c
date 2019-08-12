#include<stdio.h>
#include<stdlib.h>
//giving cli input at index0
//no. of rotations of first half at index1
//direction of rotation of first half at index2
//no. of rotations of second half at index3
//direction of rotation if second half at index4
//this approach decreases the time complexity of the code
int r_rotate(int *a,int begin,int end,int r){
	int c=end-1,i,b[r];
	for(i=r-1;i>=begin;i--){ //shifting last elements to temp b[] array
		b[i]=a[c];
		c--;
	}
	for(i=c;i>=begin;i--){ //shifting rest of elements to r places right
		a[i+r]=a[i];
	}
	for(i=begin;i<r;i++){ //placing temp array at start of a[]
		a[i]=b[i];
	}
	return 0;
}
int l_rotate(int *a,int begin,int end,int r){
int i,c=begin,b[r];
for(i=begin;i<r;i++) //inserting elements in temp array b
{
	b[i]=a[i];
}
for(i=r;i<end;i++){ //shifting rest of the elements of array to beginning by count of rotations
	a[i-r]=a[i];
}
for(i=end-r;i<end;i++){ //inserting temp array values at the start of array a[]
	a[i]=b[c];
	c++;
}
return 0;
}
int first(int *a,int s,char d,int r){
	if(d=='r'){
		r_rotate(a,0,s/2,r);
	}
	else if(d=='l'){
		l_rotate(a,0,s/2,r);
	}
	else{
		printf("Error at first direction\n");
	}
}
int last(int *a,int s,char d,int r){
	int begin;
	if(s%2==0)
	begin=s/2;
	else
	begin=(s/2)+1;
	if(d=='r'){
		r_rotate(a,begin,s,r);
	}
	else if(d=='l'){
		l_rotate(a,begin,s,r);
	}
	else{
		printf("Error at second direction\n");
	}
}
int main(int argc, const char* argv[]){
	int i,s=argc-5,a[s],frot=atoi(argv[1]),srot=atoi(argv[3]);
	int fr=frot%(s/2); // if the no of rotations is greater than size of array then it will minimise the effort
	int sr=srot%(s/2); //as size==rotations will give the same o/p as i/p
	char fh=argv[2][0]; //roatatio direction of first half
	char sh=argv[4][0]; //rotation direction of second half
	for(i=0;i<s;i++){
		a[i]=atoi(argv[i+5]);
	}
	first(a,s,fh,fr);
	last(a,s,sh,sr);
	for(i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
