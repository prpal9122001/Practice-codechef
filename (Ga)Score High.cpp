//https://www.codechef.com/problems/HIGHSCORE?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(max(a,max(b,max(c,d))))<<endl;
        
        }
	// your code goes here
	return 0;
}
