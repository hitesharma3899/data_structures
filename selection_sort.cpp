#include<iostream>
using namespace std;
void selection(int *a, int n){
  int i,j,m,x,t,f;
  for(i=0;i<n-1;i++){
    m=a[i];
    f=0;
    for(j=i+1;j<n;j++)
      if(a[j]<m){
        m=a[j];
        x=j;
        f=1;
      }
    if(f==1){
    t=a[i];
    a[i]=a[x];
    a[x]=t;
  }
  }
}
int main(int argc, const char* argv[]){
  int i,a[argc-1],r=3,c=3;
  for(i=0;i<argc-1;i++)
    a[i]=atoi(argv[i+1]);
  selection(a,argc-1);
  for(i=0;i<argc-1;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}

