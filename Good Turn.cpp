//https://www.codechef.com/problems/GDTURN?tab=statement


#include <iostream>
using namespace std;

int main() {
    int a,x,y,i;
	cin>>a;
	for(i=0;i<a;i++){
	    cin>>x>>y;
	    if(x+y>6)
	    cout<<"YES\n";
	    
	    else
	    cout<<"NO\n";
	}
	
	return 0;
}
