//https://www.codechef.com/problems/COMPRESSVD?tab=ide

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            count++;
        }
    cout<<n-count<<endl;
    
        
    }
    
    
	// your code goes here
	return 0;
}
