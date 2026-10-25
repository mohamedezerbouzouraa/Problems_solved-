#include <bits/stdc++.h>
using namespace std;
vector<long long> primes;
bool estVoyelle(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
 
void solve()
{
    string s;
    cin >> s;
    long long nb=0;
    int len = s.size();
    vector<long long> t;
    for (long long i = 0; i < len-2; i++)
    {if (i<len-3 and i>0 and s[i]=='G' and s[i+1]=='A' and s[i+2]=='S' and s[i+3]==s[i-1] and estVoyelle(s[i-1]))
    {t.push_back(i);
 
    }
 
    }
    if (t.size()==0)
    {
        cout<<'-'<<"\n";
    }
    else if (t.size()==1)
    {
        for (long long i = 0; i < len; )
        {
            if(i==t[0])
            {
                i+=4;
            }
            else
            {
                cout<<s[i];i++;
            }
 
        }
        cout<<"\n";
    }
    else
    {
        long long diff=t[1]-t[0];
        if (diff!=4){cout<<'+'<<"\n";return;}
        for (long long i = 1; i < t.size(); i++)
        {if (t[i]-t[i-1]!=4 )
        {cout<<'+'<<"\n";return;}
 
        }
        for (long long i = 0; i < len; )
        {
            if(i==t[0]){i+=4;}
            else
            {
                cout<<s[i];i++;
            }
        }
        cout<<"\n";
 
    }
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
