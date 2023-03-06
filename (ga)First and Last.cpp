//https://www.codechef.com/problems/FIRSTANDLAST?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=a[0]+a[n-1]; //way to sum of right rotate array 
        for(int i=0;i<(n-1);i++){
	        sum=max(sum,a[i]+a[i+1]);
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
