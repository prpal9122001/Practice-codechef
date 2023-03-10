//https://www.codechef.com/LRNDSA01/problems/CONFLIP?tab=statement

#include <iostream>
using namespace std;

int main() {
   int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int i,coin,q;
            cin>>i>>coin>>q;
            int ans = coin/2;
            if(i==q)cout << ans <<'\n';
            else cout << coin-ans <<'\n';
        }
    }
    return 0;
}
	
