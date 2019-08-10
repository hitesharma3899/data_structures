#include<iostream>
using namespace std;
void insertion(int *a, int n){
  int t,j,i;
  for(i=1;i<n;i++){
    j=i;
    t=a[j];
    while(a[j-1]>t){
      a[j]=a[j-1];
      j--;
    }
    a[j]=t;
}
/*
void insertion(int *a, int n){  //alternate syntax
  int t,j,i;
  for(i=0;i<n-1;i++){
    j=i+1;
    t=a[j];for(j=i;j>=0;j--){
      if(t<a[j]){
        a[j+1]=a[j];
      }
      else if(t>a[j]){
        a[j+1]=t;
        break;
      }
    }*/
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main(int argc, const char* argv[]){
  int i,a[argc-1];
  for(i=0;i<argc-1;i++){
    a[i]=atoi(argv[i+1]);
  }
  insertion(a,argc-1);
}
