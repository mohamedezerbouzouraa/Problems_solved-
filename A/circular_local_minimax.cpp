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
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n%2==1){cout << "NO" << endl;return;}
    sort(a.begin(), a.end());
    vector<bool>b(n);
    vector<long long>c(n);
    long long t1=0,t2=(long long)(n/2),i=0;
    long long t2min=t2;
    while (t1<(long long)(n/2))
    {c[i]=a[t1];
        if (i>0 and c[i]==c[i-1]){cout<<"NO"<<endl;return;}
        i++;

        while (t2<n and not(a[t2]>a[t1] and b[t2]==false and a[t2]!=c[i-1]))
        {
            t2++;
        }
        if (t2==n){cout << "NO" << endl;return;}
        b[t2]=true;
        if (t2==t2min)
        {t2min++;
            while (t2min<n and b[t2min]==true)
            {
                t2min++;
            }


        }
        b[t1]=true;
        c[i]=a[t2];
        i+=1;
        t1++;
        t2=t2min;


    }
    cout<<"YES"<<endl;
    for (long long i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
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
