// Palindromic pattern
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter the  values upto which numbers should be used in the pattern"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		int z=i;
		for(j=1;j<=n-i;j++){
			cout<<" "<<" ";
		}
		for(;j<=n;j++){
			cout<<z<<" ";
			z--;
		}
		z=1;
		for(;j<=(n+i-1);j++){
			z++;
			cout<<z<<" ";
		}
		cout<<endl;
	}
	return 0;
}
