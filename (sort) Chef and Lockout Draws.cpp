//https://www.codechef.com/problems/LOCKDRAW?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
         int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
