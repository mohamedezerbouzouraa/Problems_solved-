#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;





void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long i=0;
    while (i<s.length()and s[i]=='0')
    {i++;

    }
    string sub = s.substr(0, i);
    s=s.substr(i)+sub;
    i=1;
    long long nbz=0,nbzm=0;
    while (i<s.length())
    {if (s[i]=='0')
    {while (i<s.length()and s[i]=='0')
    {
        nbz++;
        i++;
    }
        nbzm=max(nbz,nbzm);
        nbz=0;
    }
        else{i++;}


    }
    cout<<nbzm<<endl;
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
