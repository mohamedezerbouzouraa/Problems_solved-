#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;







void solve()
{long long n;
    cin >> n;
    vector<long long> a(n);
    string s;
    cin >> s;
    vector<long long> b1(n);
    vector<long long> b0(n,0);
    for (long long i = 0; i < n; i++)
    {
        a[i]=s[i]-'0';
        if (i==0)
        {
            if (a[i]==0){b0[0]=1;}
        }
        else
        {
            if (a[i]==0){b0[i]=b0[i-1]+1;}
            else{b0[i]=b0[i-1];}
        }
    }
    for (long long i = n-1; i >=0; i--)
    {
        if (i==n-1)
        {
            if (a[i]==1){b1[n-1]=1;}
        }
        else
        {
            if (a[i]==1){b1[i]=b1[i+1]+1;}
            else{b1[i]=b1[i+1];}
        }

    }
    long long midd=n+2,lastmidd=-2;
    for (long long k=0; k<n-1; k++)
    {
        if (b0[k]>=(long long)(k/2 +1) and b1[k+1]>=(long long)((n-(k+1)+1)/2 ))
        {if (llabs(2*(k+1)-n)<=llabs(2*(midd+1)-n))
        {  if (llabs(2*(k+1)-n)==llabs(2*(midd+1)-n)){cout<<midd+1<<endl;return;}
            if (midd==n+2){midd=k;}
            else
            {
                lastmidd=midd;
                midd=k;
            }
        }
            else{break;}

        }
    }
    if (midd!=n+2){cout<<midd+1<<endl;return;}
    if (b1[0]>=(n+1)/2){cout<<0<<endl;return;}
    else{cout<<n<<endl;return;}


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
