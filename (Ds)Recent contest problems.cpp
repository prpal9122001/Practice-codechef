//https://www.codechef.com/problems/RECENTCONT?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=="START38"){
	            count++;
	        }
	    }
	    cout<<count<<" "<<(n-count)<<endl;
	}
	return 0;
}
