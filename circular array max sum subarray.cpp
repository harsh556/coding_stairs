//Maximum Sum Circular Subarray:
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
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
	return max_sum;
}
int main(){
	    int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int total_sum=kadane(a,n);
        int nsum=0;
        int ans;
 		for(int i=0;i<n;i++){
 			nsum+=a[i];
 			a[i]=-(a[i]);
		 }
		ans=max(nsum+kadane(a,n),total_sum);
        cout<<ans;
        return 0;
}

