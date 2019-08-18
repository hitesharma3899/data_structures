#include<iostream>
using namespace std;
void swap(int *p,int *q){
  int t=*p;
  *p=*q;
  *q=t;
}
void selection(int *a, int n, int i){ //Recursion
  int x=i,j;
  for(j=i+1;j<n;j++)
  if(a[x]>a[j])
  x=j; //x stores min value
  swap(&a[i],&a[x]);
  if(i+1<n)
  selection(a,n,i+1);
}
int main(int argc, const char* argv[]){
  int i,a[argc-1],r=3,c=3;
  for(i=0;i<argc-1;i++)
    a[i]=atoi(argv[i+1]);
  selection(a,argc-1,0);
  for(int i=0;i<argc-1;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}
