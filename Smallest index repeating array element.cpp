//Given an array arr[] of size N. The task is to find the first repeating element in an
//array of integers, i.e., an element that occurs more than once and whose index of
//first occurrence is smallest.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=1e6+1;
	int b[m];
	int ans=INT_MAX;
	for(int i=0;i<m;i++){
		b[i]=-1;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]>=0){
			if(b[a[i]]<ans){
				ans=b[a[i]];
			}
		}
		else{
			b[a[i]]=i;
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
