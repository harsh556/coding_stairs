//find the largest word length in a sentence
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cin.ignore();
    char arr[n+1]; 
    cin.getline(arr,n);
    // cin.ignore();
    int cur=0,max=0;
    int maxst=0,st=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(cur>max){
                max=cur;
                maxst=st;
            }
            cur=0;
            st=i+1;
        }else
            cur++;
    }
    cout<<"max length : "<<max<<endl;
    for(int i=0;i<max;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}
 