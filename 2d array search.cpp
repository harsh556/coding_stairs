//Problem: We have to find if value x is present in the 2D array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	cout<<"Enter the size of array"<<endl;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter the key"<<endl;
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==k){
				cout<<"The key is present at x: "<<i<<" and y : "<<j<<endl;
			}
		}
	}
	cout<<"Element found";
	return 0;
}
