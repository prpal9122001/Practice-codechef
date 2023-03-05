//https://www.codechef.com/problems/PAIREQ?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
	   
	    cin>>n;
       
        int arr[n];
        
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max_count=0;
        
        for(int i=0;i<n;i++)
        {
            int count=0;
            
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
               if (count>max_count)
               {
                   max_count=count;
               }
            }
        }
        
        cout<<n-max_count<<endl;
        
    }
	// your code goes here
	return 0;
}
