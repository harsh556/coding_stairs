/*Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the sum to be matched to a subarray"<<endl;
	cin>>s;
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0,j=0,sum=0,st=0,en=0;
	while(j<n && sum + a[j]<=s){
		sum += a[j];
		j++;
		}
	if(sum==s){
		cout<<i<<" "<<j;
		return 0;
	}
	while(j<n){
		sum+=a[j];
		while(sum>s){
			sum -= a[i];
			i++;
		}
		if(sum==s){
			cout<<i<<" "<<j;
			break;
		}	
		j++;
	}
	return 0;
	}


