//https://www.codechef.com/problems/BURGERS?tab=ide

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
         if(a<=b) //cause we no. of buns or patty determine how many burgers we can make
	    {
	       cout<<a<<endl; 
	    }
	    else
	    cout<<b<<endl;
	    
	}
	// your code goes here
	return 0;
}
