#include<iostream>
using namespace std;
void selection(int *a, int n){
  int i,j,m,x,t;
  for(i=0;i<n-1;i++){
    m=a[i];
    for(j=i+1;j<n;j++){
      if(a[j]<m){
        m=a[j];
        x=j;
      }
    }
    if(x!=i){
    t=a[i];
    a[i]=a[x];
    a[x]=t;
  }
  }
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main(int argc, const char* argv[]){
  int i,a[argc-1],r=3,c=3;
  for(i=0;i<argc-1;i++){
    a[i]=atoi(argv[i+1]);
  }
  selection(a,argc-1);
}
