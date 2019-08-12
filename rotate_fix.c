#include<stdio.h>
#include<stdlib.h>
//given an rotated array, unrotate it
//find the no. of rotations (minimum)
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

int main(int argc, const char* argv[]) {
	int i,n=argc-1,a[n],k=n-1;
	    for(i=0;i<n;i++) {
		    a[i]=atoi(argv[i+1]);
	    }
			if(n%2!=0&&a[n/2]<a[(n/2)-1]){ //if the initial element is in exact middle of array
				r_rotate(a,n,n/2);
				printf("Array might have been rotated in any direction by %d digits\n",n/2);
			}
			else {
	    for(i=1;i<n;i++){
		    if(a[i]<a[i-1]){
					l_rotate(a,n,i);
					printf("Array is right rotated by %d digits\n",i);
					break;
				}
				else if(a[k]<a[k-1]){
					r_rotate(a,n,i);
					printf("Array is left rotated by %d digits\n",i);
					break;
				}
				k--;
			}
		}
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("\n");
			return 0;
}
