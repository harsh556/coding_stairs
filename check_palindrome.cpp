#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the char array"<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"enter the string you want to store in the array"<<endl;
    cin>>arr;
    int a=0,b=n-1;
    bool flag=false;
    while(a<b){
        if(arr[a]==arr[b]){
            flag=true;
        }else{
            flag=false;
            break;
        }
        a++;
        b--;
    }
    if(flag==true){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindome"<<endl;
    }
    return 0;
}
