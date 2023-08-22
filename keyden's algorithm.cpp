//Maximum Sum Subarray Array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	int max_sum=INT_MIN;
	for(int i=0;i<n;i++){
		if(sum<sum+a[i]){
			sum=sum+a[i];
			if(max_sum<sum){
				max_sum=max(max_sum,sum);
			}
		}else{
			sum=sum+a[i];
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	cout<<max_sum;
	return 0;	
}
