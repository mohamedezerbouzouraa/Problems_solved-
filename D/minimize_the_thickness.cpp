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
    vector<long long> c(n);
    long long s=0;
    for (long long i = 0; i < n; i++)
    {cin >> a[i];
        s+=a[i];
        if (i==0){b[0]=a[0];}
        else{b[i]=b[i-1]+a[i];}}
    bool p=true,p2=false;
    long long lnn=n;
    for (long long i = 0; i < n; i++)
    {
        if (b[i]>((long long)(s/2)))
        {p=false;break;}
        else if (s%(b[i])==0)
        {long long t1=i,t2=i+1,d=b[i];
            long long lnn1=i+1;
            while (t2<n )
            {while (t2<n and b[t2]-b[t1]!=d)
            {if (b[t2]-b[t1]<d)
            { t2++;}
                else{p=false;break;}
            }
                if (t2==n or p==false){break;}
                else
                {lnn1=max(lnn1,t2-t1);
                    t1=t2;
                    t2++;

                }


            }
            if (p==false){p=true;}
            else
            {
                lnn=min(lnn,lnn1);
                p=true;
            }




        }
    }
    if (lnn==n){cout<<n<<endl;return;}
    else{cout<<lnn<<endl;return;}
}






int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
