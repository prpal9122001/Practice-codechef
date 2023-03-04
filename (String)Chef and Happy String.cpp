//https://www.codechef.com/problems/HAPPYSTR?tab=ide

#include <iostream>
using namespace std;

int main() {
 
    int t;
    cin>>t;
    while(t--){
         int i,y;
         y=0;
         string s;
         cin>>s;
          int n = s.length();
          for(i=0;i<n;i++){
           if( s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
              y++;
              if(y==3){
              cout<<"happy"<<endl;
              break;
            }
        }
         else y=0;
            
        }
         if(y!=3)
         cout<<"sad"<<endl;
    }
	// your code goes here
	return 0;
}
