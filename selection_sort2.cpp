#include<iostream>
using namespace std;
void swap(int *p,int *q){
  int t=*p;
  *p=*q;
  *q=t;
}
void selection(int *a, int n){
  int i,j,x,z,m;
  for(i=0;i<n/2;i++){
    x=i;
    m=n-1-i;
    z=m;
    for(j=i+1;j<=m;j++){
      if(a[x]>a[j])
        x=j; //x stores the min element index
        if(a[z]<a[j])
        z=j; //z stores the max element index
      }
    if(x!=i)
      swap(&a[i],&a[x]);
    if(z!=m)
      swap(&a[m],&a[z]);
    }
}
int main(int argc, const char* argv[]){
  int i,a[argc-1],r=3,c=3;
  for(i=0;i<argc-1;i++)
    a[i]=atoi(argv[i+1]);
  selection(a,argc-1);
  for(int i=0;i<argc-1;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}
