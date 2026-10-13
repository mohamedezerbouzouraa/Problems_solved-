#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
 
 
int nbBits(long long x)
{
    int c = 0;
    while (x > 0)
    {
        c++;
        x /= 2;
    }
    return c;
}
 
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a;
    a.push_back(n);
    for (int i = 0; i < nbBits(n); i++)
    {long long x=n;
        if ((n >> i) & 1)
    {x &= ~(1LL << i);
            if (x>0){a.push_back(x);}
 
 
    }
 
    }
    cout<<a.size()<<endl;
    for (int i = a.size()-1; i >=0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
