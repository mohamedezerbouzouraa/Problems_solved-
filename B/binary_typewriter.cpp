#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{   long long n;
    string s;
    cin >> n;
    cin >> s;
    long long nbtr=0,nbtot=0;
    for (long long i=0;i<s.length();i++)
    {
        if (i<s.length()-1 )
        {if (s[i]!=s[i+1])
        {
            nbtr++;
        }
        }
        if (i==0 )
        {
            if (s[i]=='0')
            {
                nbtot++;
            }
            else{nbtot+=2;}
        }
        else
        {if (s[i]==s[i-1]){nbtot++;}
            else{nbtot+=2;}

        }

    }
    if (nbtr==0)
    {
        cout<<nbtot<<endl;
    }
    else if (nbtr==1)
    {
        if (s[0]=='0'){cout<<n+1<<endl;}
        else{cout<<n+1<<endl;}
    }
    else if (nbtr==2)
    {
        if (s[0]=='0'){cout<<n+1<<endl;}
        else{cout<<n+1<<endl;}
    }
    else
    {
        cout<<nbtot-2<<endl;
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
