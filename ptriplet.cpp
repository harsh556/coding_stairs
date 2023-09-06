//pythagorean triplet
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void ptriplet(int a,int b,int c){
	int x,y,z;
	if(a>b && a>c){
		x=a;
		y=b;
		z=c;
	}else if(b>c && b>a){
		x=b;
		y=a;
		z=c;
	}else{
		x=c;
		y=b;
		z=a;
	}
	if (pow(x,2)==pow(y,2)+pow(z,2)){
		cout<<"It's a pythagorean triplet"<<endl;
	}else{
		cout<<"Not a pythagorean triplet"<<endl;
	}
}

int main(){
	int p,q,r;
	cin>>p>>q>>r;
	ptriplet(p,q,r);
	return 0;
}
