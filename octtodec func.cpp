//Octal to decimal func
#include<iostream>
using namespace std;
int octtodec(int n){
	int soln=0;
	int x=1;
	while(n>0){
		int y=n%10;
		soln+=x*y;
		x*=8;
		n/=10;
	}
	return soln;
}
int main(){
	int a;
	cout<<"give the octal number for conversion to decimal"<<endl;
	cin>>a;
	cout<<octtodec(a);
	return 0;
}
