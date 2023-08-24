//Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the length of sides of the triangle"<<endl;
	cin>>a>>b>>c;
	if(a==b){
		if(b==c){
			cout<<"equilateral";
			}
		else{
				cout<<"isosceles";
		}
	}
	else if(b==c){
		cout<<"isosceles";
	}
	else if(a==c){
		cout<<"isosceles";
	}
	else{
		cout<<"scalene";
	}
	return 0;

}
