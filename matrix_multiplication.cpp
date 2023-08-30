/*Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three number for matrix sizes to be multiplied"<<endl;
    cin>>a>>b>>c;
    int m[a][b],n[b][c];
    cout<<"Enter the Elements of the first Array"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>m[i][j];
        }
    }
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>n[i][j];
        }
    }
    int ans[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<b;k++){
                ans[i][j]+=m[i][k]*n[k][j];
            }
        }
    }
    cout<<"The Answer matrix is : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}