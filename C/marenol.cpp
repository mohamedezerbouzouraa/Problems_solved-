#include <bits/stdc++.h>
#include <string>
using namespace std;



long long nbelsame1(string a,long long b)
{ long long s = 0;
    while (b<a.size())
    {if (a[b]=='1')s++;
        b+=2;
    }
    return s;
}
bool nb1(string a,string b)
{long long k1 = 0,k2=0;
    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] == '1')k1++;
    }
    for (int i = 0; i < b.size(); i++)
    {

        if (b[i] == '1')k2++;
    }
    return k1 == k2;}

void solve()
{ long long n;
    cin>> n;
    string s1,s2; cin >> s1 >> s2;
    if (nb1(s1,s2)==0) cout<<"NO"<<endl;
    else
    {
        long long k3=0;
    for (long long i=0;i<2;i++)
    { if (nbelsame1(s1,i)<nbelsame1(s2,i) or nbelsame1(s1,i)>nbelsame1(s2,i))
    { k3=1;

        break;
    }

    }
        if (k3==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;



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
