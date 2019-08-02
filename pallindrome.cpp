#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char* argv[]){
	string s1=argv[1];
	int i,j=0,n=s1.length();
	char s2[n];
	for(i=n-1;i>=0;i--){
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
	if(s1==s2){
		cout<<"String is pallindrome\n";
	}
	else{
		cout<<"String is not pallindrome\n";
	}
}	
