#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
 
 
#include <cmath>
using namespace std;
 
 
 
 
 
 
void solve()
{
    long long n,k;
    cin >> n >>k;
    long long t=1<<(n-k+1);
    cout << 2*(k-1)+ t<< endl;
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t ;
    cin >> t;
    while(t!=0)
    {
        solve();
        t--;
    }
    }
