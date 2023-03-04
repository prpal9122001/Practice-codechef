//https://www.codechef.com/problems/DIGARR?tab=ide

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,i,y;
        y=0;
        cin>>n;
        string value;
        cin>>value;
        for(int i=0;i<n;i++){
            if(value[i] == '0' || value[i] == '5')
            {
            y = 1;
            break;
            }
        }
        if(y==1){
        cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;
        }
    
   }

	// your code goes here
	return 0;
}



