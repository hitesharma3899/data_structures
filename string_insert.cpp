#include<iostream>
#include<string>
using namespace std;
//Insert a given string into another string at a given position
//i[1]=main string i[2]=pos of new string to be added i[3]=new string to be added
int main(int argc, const char* argv[]){
  string o=argv[1],p=argv[3];
  int n=atoi(argv[2])-1;
  o.insert(n,p);
  cout<<o<<endl;
  return 0;
}
