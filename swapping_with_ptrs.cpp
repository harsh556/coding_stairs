#include<iostream>
using namespace std;

void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=10,b=20;
    cout<<"Before  the swap : a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"After swap : a = "<<a<<" and b = "<<b;
    return 0;
}