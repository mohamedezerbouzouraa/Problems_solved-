#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long x, maxV = 0, mex;
    bool flag = false;
    vector<long long> s(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end()); 
    for (long long i = 0; i < n; i++)
    {
        if (s[i] > maxV)
        { maxV = s[i];}
        if (s[i] != i && flag == false)
        {flag = true;
            mex = i;}
    }
    if (!flag) mex = n;
    if (k == 0)
    {cout << n << endl;}
    else if (maxV == n - 1)
    {cout << n + k << endl;
        return;}
    else if (maxV == n)
    {cout << n << endl;
        return;}
    else
    {long long p = (mex + maxV + 1) / 2, i; 
      if (mex < n - 1){
            for (i = mex; i < n; i++)          
            {if (s[i] == p){
                    cout << n << endl;        
                    return;}
                else if (s[i] > p)
                {cout << n + 1 << endl;      
                    return;
                }}
            cout << n + 1 << endl;
            return;}
        else
        {if (p == maxV) { cout << n << endl; return; }
         else { cout << n + 1 << endl; return; }}}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {solve();
    }
    return 0;
}
