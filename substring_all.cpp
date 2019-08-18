#include<iostream>
#include<string>
using namespace std; //find all substrings of a given string cpp type
void substring(string s){
  int i,j,k,l,n=s.length();
  for(i=1;i<=n;i++){
    char a[i];
    for(j=0;j<=n-i;j++){
      l=j;
      for(k=0;k<i;k++){
        a[k]=s[l];
        l++;
        cout<<a[k];
      }
      cout<<" ";
    }
    cout<<endl;
  }
}
int main(int argc, const char* argv[]){
  substring(argv[1]);
}
