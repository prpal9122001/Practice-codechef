//https://www.codechef.com/LRNDSA02/problems/COMPILER?tab=submissions

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
	    stack<char> st;
	    int ans = 0;
	    for(int i = 0; i < s.length(); i++){
	        if(!st.empty() && st.top() == '<' && s[i] == '>') 
	          st.pop();
	        else st.push(s[i]);
	        if(st.empty()) ans = i+1;
	    }
	    
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
