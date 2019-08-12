#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char* argv[]){
  string c=argv[1];
  int i,l=c.length(),j=l-1;
  char t;
  for(i=0;i<l/2;i++){
    t=c[i];
    c[i]=c[j];
    c[j]=t;
    j--;
  }
  cout<<c<<endl;
  return 0;
}
