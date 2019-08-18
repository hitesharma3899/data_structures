#include<iostream>
#include<string>
using namespace std; //find all substrings of given string cpp type recursively
void substring(string s,int n,char a[],int i){
  int j,k,l;
  if(i<=n){
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
  substring(s,n,a,i+1);
  }
}
int main(int argc, const char* argv[]){
  string s=argv[1];
  int n=s.length();
  char a[n];
  substring(s,n,a,1);
}
