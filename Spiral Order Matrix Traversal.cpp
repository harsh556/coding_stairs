/*Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come
inwards in the similar way.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the size of the 2d array"<<endl;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int rs=0;
	int re=n-1;
	int cs=0;
	int ce=m-1;
	while(rs<=re && cs<=ce){
		for(int col=cs;col<=ce;col++){
			cout<<a[rs][col]<<" ";
		}
		rs++;
		for(int row=rs;row<=re;row++){
			cout<<a[row][ce]<<" ";
		}
		ce--;
		for(int col=ce;col>=cs;col--){
			cout<<a[re][col]<<" ";
		}
		re--;
		for(int row=re;row>=rs;row--){
			cout<<a[row][cs]<<" ";
		}
		cs++;
	}
	return 0;
}
