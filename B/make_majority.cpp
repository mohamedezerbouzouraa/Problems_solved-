#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 

 
 
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long x=0,nbblocs0=0;
    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')x++;
        if (i==0)
        {
            if (s[i]=='0')nbblocs0++;
        }
        else
        {
            if (s[i]=='0' and s[i-1]=='1')nbblocs0++;
        }
 
    }
    if (x>nbblocs0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
 
 
 
    }
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
