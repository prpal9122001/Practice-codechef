//https://www.codechef.com/problems/ONP?tab=statement

#include <iostream>
#include<stack>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
	    cin>>s;
	    
	    stack<char> c;
	   
	    for(int i=0; i<s.size(); i++){
	        
	        if(s[i]=='+' || s[i]=='*' || s[i]=='^' || s[i]=='-' || s[i]=='(' || s[i]== '/')
	        {
	            c.push(s[i]);
	        }
	        
	        
	        else if(s[i]==')')
	        {
	                while(c.top()!='('){
	                cout<<c.top();
	                c.pop();
	            }
	            c.pop();
	        }
	            
	            
	            
	        else
	        {
	            cout<<s[i];
	        }
	     
	    }
	   cout<<endl;
	  
	}
	
	return 0;
}
