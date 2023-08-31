/*Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of the 2d array"<<endl;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int target;
    cout<<"Enter the Target value"<<endl;
    cin>>target;
    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0){
        if(a[r][c]==target){
            flag=true;
            break;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag==true){
        cout<<"Element exist"<<endl;
    }else{
        cout<<"Element doesn't exist"<<endl;
    }
    return 0;
}