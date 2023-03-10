//https://www.codechef.com/LRNDSA01/problems/FLOW007?tab=statement

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (t; t > 0; t--)
    {
        int n;
        cin >> n;
        int a = 0;
        while (n > 0)
        {
            a = a*10 + n%10;
            n /= 10;
        }
        cout << a <<endl;
    }
}
