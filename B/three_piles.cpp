#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
 
 
#include <cmath>
using namespace std;
 
 
 
 
 
 
 
void solve()
{long long a,b,c;
    cin >> a >> b >> c;
    if (llabs(a+c-b) >=llabs(a-b) )
    {
        a+=c;
    }
    else if (llabs(a-(b+c))<llabs(a-b) ){b+=c;}
    cout<<llabs(a-b)<<endl;
 
}
 
 
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}
