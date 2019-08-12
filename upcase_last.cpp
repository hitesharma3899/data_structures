#include<iostream>
#include<string>
using namespace std;
//shifting all uppercase letters at the end 
int main(int argc, const char* argv[]){
	string q=argv[1];
  int i,j=0,n=q.length();
  char l[n];
  for(i=0;i<n;i++){
    if(q[i]>=65&&q[i]<=90){
      l[j]=q[i];
      j++;
			q[i]=0;
    }
  }
	l[j]='\0';
	q=q+l;
	cout<<q<<endl;
	return 0;
}
