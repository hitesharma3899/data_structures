#include<iostream>
using namespace std;
void swap(int *p,int *q){
  int t=*p;
  *p=*q;
  *q=t;
}
int partition(int *a,int low,int high){ //lomotu partititoning scheme
    int pivot_id=(rand()%(high-low))+low; //else simply put high
    swap(&a[pivot_id],&a[high]); //for random, swap high and given rand
    int pivot=a[high]; //a[pivot_id] in case without random function
    int j,i=low-1; //index of smaller element
    for(j=low;j<high;j++){
        if(a[j]<=pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return i+1;
}
void quick(int *a,int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        quick(a,low,p-1);
        quick(a,p+1,high);
    }
}
int main(int argc, const char* argv[]){
    int a[argc-1],i;
    for(i=0;i<argc-1;i++){
        a[i]=atoi(argv[i+1]);
    }
    quick(a,0,argc-1);
    for(i=0;i<argc-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}