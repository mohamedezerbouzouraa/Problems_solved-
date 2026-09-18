#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long x,y;
    for (long long i = 0; i < n; i++){cin>>a[i];}
    for (long long i = 0; i < n; i++){cin>>b[i];}
 
    long long nbtot=0;
    for (long long i = 0; i < n; i++)
    { if (a[i]<=b[i])
    {
        long long t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
 
        if (a[i]==b[i]){}
        else
        {
 
            long long xa=a[i];
            long long xb=b[i];
            while (xa!=xb)
            {   bool verif=(xa%2 == 0 ? true : false);
                if (verif == false)
                {
                    long long c=3,nbtoti=nbtot;
                    long long borne = (long long)sqrt((double)xa);
                    while (c<=borne)
                    {
                        if (xa%c==0)
                        {
                            xa=xa/c;
                            nbtot++;
                            break;
                        }
                        else{c+=2;}
                    }
                    if (nbtoti==nbtot){xa=1;nbtot++;}
                }
                else{xa=xa/2;nbtot++;}
                if (xa<=xb)
                {long long ya=xa;
                    xa=xb;
                    xb=ya;
 
                }
 
 
            }
 
 
 
 
 
        }
    }
 
    cout << nbtot << endl;
 
 
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
