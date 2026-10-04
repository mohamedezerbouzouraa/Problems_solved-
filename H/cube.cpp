#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    n=n/6;
    long long p=1;
    if (n%2==0)
    {
        p=2;
        while (p*p!=n)
        {
            p+=2;
        }
    }
    else
    {
        p=1;
        while (p*p!=n){p+=2;}
    }
    cout<<p<<endl;
 
}
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
}
