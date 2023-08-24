/*Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2 */
#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int mx=INT_MIN;

	for(int i=0;i<n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	int m=max(mx+1,1);
	int b[m];
	for(int i=0;i<m;i++){
		b[i]=-1;
	}
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			b[a[i]]=i;
		}
	}
	int ans;
	for(int i=0;i<m;i++){
		if(b[i]==-1){
			ans=i;
			break;
		}
	}
	cout<<ans;
	return 0;
}
