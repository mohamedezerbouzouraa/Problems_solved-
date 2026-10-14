#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
 
 

 
void solve()
{
    long long n,x,y;
    cin >> n>>x>>y;
    vector<long long> t(n);
    vector<long long> b;
    vector<long long> a_et_c;
    for (long long i = 0; i < n; i++)
    {cin>>t[i];
        if (i+1>x and i<y)
        {
            b.push_back(t[i]);
        }
        else
        {
            a_et_c.push_back(t[i]);
        }
    }
    
    int s = min_element(b.begin(), b.end()) - b.begin();
    rotate(b.begin(), b.begin() + s, b.end());
    long long i=0;
while (i<a_et_c.size() and a_et_c[i]<=b[0])
{
    cout<<a_et_c[i]<<" ";
    i++;
 
}
    for (long long k = 0; k < b.size(); k++)
    {cout<<b[k]<<" ";
 
    }
    while (i<a_et_c.size() )
    {cout<<a_et_c[i]<<" ";
        i++;
    }
    cout<<"\n";
 
 
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
