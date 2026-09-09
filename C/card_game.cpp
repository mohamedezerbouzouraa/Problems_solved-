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
    if (s.length()==1 or s.length()==2)
    {
        if (s[0]=='A'){cout<<"Alice"<<endl;return;}
        else {cout<<"Bob"<<endl;return;}
    }
    else if (s[0]==s[(long long)(s.length()-1)]) {
        if (s[0]=='A'){cout<<"Alice"<<endl;return;}
        else {cout<<"Bob"<<endl;return;}

    }
    else
    {long long firstB,firstA,lastB,lastA;
        bool pa=false,pb=false;
        for (long long i=0;i<s.length();i++)
        {if (s[i]=='A' and pa==false)
        {
            firstA=i;
            lastA=i;
            pa=true;
        }
            else if (s[i]=='A' ){lastA=i;}
            else if (s[i]=='B' and pb==false){
                firstB=i;
                lastB=i;
                pb=true;
            }
            else if (s[i]=='B' ){lastB=i;}}
        if (s[0]==s[n-1])
        {if (s[0]=='B'){cout<<"Bob"<<endl;return;}
            else{cout<<"Alice"<<endl;return;}}
        else if (firstB==n-1){cout<<"Alice"<<endl;return;}
        else if (lastB<firstA)
        {if (firstA==n-1){cout<<"Bob"<<endl;return;}
            else{cout<<"Alice"<<endl;return;}}
        else
        {if (firstB>lastA)
        {
            if (firstB==n-1){cout<<"Alice"<<endl;return;}
            else{cout<<"Bob"<<endl;return;}
        }
            else if (lastA>firstB)
            {
                if (firstA<firstB){cout<<"Bob"<<endl;return;}
                else
                {
                    if (s[lastA-1]=='B'){cout<<"Bob"<<endl;return;}
                    else{cout<<"Alice"<<endl;return;}
                }
            }





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
