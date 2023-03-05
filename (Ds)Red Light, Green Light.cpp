//https://www.codechef.com/problems/DOLL?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int shotplayer=0;
        while(n--){
        int player;
	        cin >> player;
	        if (player > k) shotplayer++;
	    }
	    
	    cout << shotplayer << '\n';
	}
	return 0;
}
