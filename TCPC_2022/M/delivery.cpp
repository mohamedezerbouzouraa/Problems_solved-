#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
 
 
#include <cmath>
using namespace std;
 
 
 
bool estpremier(long long x)
{
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0){return false;}
    }
    return true;
}
 
 
 
void solve()
{
    long long x;
    cin >> x;
    long long l,r;
    if (x%2 == 1)
    {
        if (x==1){cout<<-1<<endl;return;}
        cout << (long long)(x/2) <<" "<<(long long)(x/2)+1<< endl;
    }
    else
    {bool flag=false;
        long long div1,div2,y=2*x;
        for (long long i = 2; 2*i<y ; i+=2)
        {
            if (y%i == 0)
            {
                if ((y/i)%2==1)
                {
                    flag=true;
                    div1=max(i,(long long)(y/i));
                    div2=y/div1;
                    break;
                }
            }
 
            }
        if (flag==false){cout<<-1<<endl;}
        else{ l=(long long)(div1-div2-1)/2 + 1;
            r=div2+l;
            cout<<l<<" "<<r-1<<endl;
 
 
        }
    }
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
