//https://www.codechef.com/CCSTART2/problems/FINDMELI?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == k){
            count++;
            break;
        }
    }
    if(count == 1){
        cout<<"1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
	return 0;
}
