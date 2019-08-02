#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char* argv[]){
	string s1=argv[1],s2=argv[2],s3="";
	s3=s1;
	s1=s2;
	s2=s3;
	cout<<"String 1: "<<s1<<endl<<"String 2: "<<s2<<endl;
	return 0;
}
