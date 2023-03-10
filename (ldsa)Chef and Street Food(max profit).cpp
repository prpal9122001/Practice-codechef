//https://www.codechef.com/LRNDSA02/problems/STFOOD?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    while(n--){
	    int s,p,v;
	    cin>>s>>p>>v;
	    s++;
	    int profit=(p/s)*v;
	    ans=max(profit,ans);
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
