// *
// **
// ***
// ****
// ***** this as output https://www.codechef.com/CCSTART2/problems/REVSTRPT?tab=statement

#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;
    for(i=n;i>0;i--){
        
        for(j=0;j<=n;j++){
            if(j>=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
    }
     cout <<endl;
	}// your code goes here
	return 0;
}
