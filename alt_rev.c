#include<stdio.h>
#include<stdlib.h>
//take i/p while running the code
//reverse it
//alternatively arrange -ve and +ve
int main(int argc, const char* argv[])
{
  int j=argc-1,i,t;
  int a[j];
  int b[j];
  for(i=1;i<argc;i++) //reversing array
  {
    a[j]=atoi(argv[i]);
    j--;
  }
  j=0;
  if(a[0]>0) //t=toggle b/w -ve and +ve
  t=1;
  else
  t=0;
  while(j<argc-1)
  {
    for(i=0;i<argc-1;i++)
    {
      if(a[i]>0&&t==1&&a[i]!=NULL)
      {
        b[j]=a[i]; //copying element to new array
        a[i]=NULL;
        j++;
        t=0; //toggle
        i=0; //start over loop
      }
      if(a[i]<0&&t==0&&a[i]!=NULL)
      {
        b[j]=a[i];
        a[i]=NULL;
        j++;
        t=1;
        i=0;
      }
    }
  }
  return 0;
}
