#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long sa=0,sb=0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        sa+=a[i];
    }
    vector<long long> d(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
        sb+=b[i];
        if (i==0){d[0]=a[0]-b[0];}
        else{d[i]=a[i]-b[i]+d[i-1];}
    }
    if (sb<sa)cout<<"NO"<<endl;
    else if (b[0]<a[0]){cout<<"NO"<<endl;return;}
    else
    {
        if (n==1){cout<<"YES"<<endl;return;}
        else if (n==2)
        {
            if (a[0]-b[0]+a[1]-b[1]>0){cout<<"NO"<<endl;return;
        }
            else{ cout<<"YES"<<endl;return;}

        }
        else{
            for (long long i=0;i<n;i++)
            { if (d[i]>0){cout<<"NO"<<endl;return;}

            }
            cout<<"YES"<<endl;return;


        }
    }

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
