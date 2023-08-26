/*Pair Target Sum Problem
Find whether there exist 2 numbers that sum to K*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the value of k"<<endl;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			a[i]+a[j];
			if(a[i]+a[j]==k){
				cout<<"there exist numbers that add up to form k at index : "<<i<<" and "<<j;
			}
		}
	}
	return 0;
}
