#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char* argv[]){
  string g=argv[1];
  int i,n=g.length(),f[123],v;
  for(i=65;i<123;i++){ //initialising all frequencies to zero
    f[i]=0;
  }
  for(i=0;i<n;i++){ //counting frequencies of characters
    v=g[i];

    f[v]=f[v]+1;
  }
  for(i=65;i<=90;i++){ //combining uppercase and lowercase frequencies
    f[i+32]+=f[i];
  }
  for(i=97;i<=122;i++){ //printing
    if(f[i]>0){
      cout<<(char)i<<" "<<f[i]<<endl;
    }
  }
  return 0;
}
