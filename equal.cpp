#include<iostream>
#include<string>
//compare 2 strings ignore cases
using namespace std;
int main(int argc, const char* argv[]){
	string o=argv[1],p=argv[2];
	int i,ol=o.length(),pl=p.length();
	if(ol==pl){
		for(i=0;i<ol;i++){
			if(o[i]>=65 && o[i]<=90){
				o[i]=o[i]+32;
			}
			if(p[i]>=65 && p[i]<=90){
				p[i]=p[i]+32;
			}
	}
	if(o==p){
	cout<<"The strings are equal ignoring cases\n";
	}
	else{
	cout<<"The strings are not equal\n";
	}
	}
	else{
		cout<<"Strings are not equal\n";
	}
}
