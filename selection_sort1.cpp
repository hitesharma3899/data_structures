#include<iostream>
using namespace std;
void swap(int *p,int *q){
  int t=*p;
  *p=*q;
  *q=t;
}
void selection(int *a, int n){
  int i,j,x;
  for(i=0;i<n-1;i++){
    x=i;
    for(j=i+1;j<n;j++)
      if(a[x]>a[j])
        x=j; //x stores the min element index
    if(x!=i)
      swap(&a[i],&a[x]);
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
