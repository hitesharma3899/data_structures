#include<iostream>
#include<string>
using namespace std;
//Remove characters form first string that are present in second string
int main(int argc, const char* argv[]){
  string a=argv[1],b=argv[2];
  int i,j,m=a.length(),n=b.length();
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(b[i]==a[j]){
        a[j]=0;
      }
    }
  }
  cout<<a<<endl;
  return 0;
}
