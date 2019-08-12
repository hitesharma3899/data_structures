#include<iostream>
#include<string>
using namespace std;
//remove repeating elements from a string
int main(int argc, const char* argv[]){
  string x=argv[1];
  int i,j,l=x.length();
  for(i=0;i<l-1;i++){
    if(x[i]!=0){
      for(j=i+1;j<l;j++){
        if(x[i]==x[j]){
          x[j]=0;
        }
      }
    }
  }
  cout<<x<<endl;
}
