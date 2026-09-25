#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
 
 
#include <cmath>
using namespace std;
 
 
 
 
 
 
 
void solve()
{
    long long n;
 
    cin >> n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<long long> b;
    while (a.size()>1){
 
        long long tn=a.size();
    sort(a.begin(),a.end());
    for(long long j=tn-1;j>=1;j--)
    {
        if (a[j]==a[j-1])
        {if (j==tn-1)
        {
            b.push_back(a[j]);
        }
        else
        {if (a[j]==a[j+1])
        {
            a.push_back(a[j]);
        }
        else
        {
            b.push_back(a[j]);
        }
 
        }
        }
        else
        {
            if (j==tn-1){b.push_back(a[j]);}
            else
            {
                if (a[j]==a[j+1])
                {
                    a.push_back(a[j]);
                }
                else
                {
                    b.push_back(a[j]);
                }
            }
        }
    }
 
    if (a[0]==a[1]){a.push_back(a[0]);}
    else{b.push_back(a[0]);}
    a.erase(a.begin(), a.begin() + tn);
}
    for (long long i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    if (a.size()==1){cout<<a[0];}
    cout<<endl;
 
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
 
