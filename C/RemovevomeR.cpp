#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
bool x_bet_y(string a, char x, char y)
{bool very1=false,verx=false,very2=false,p=false;
    long long k=0;
    while (k<a.size())
    {if (a[k]==y and verx==false){very1=true;}
    else if (a[k]==x and very1==true and verx==false){verx=true;}
    else if (a[k]==y and verx==true){very2=true;}
        if (very1 and verx and very2){p=true;break;}
        k++;}
    return p;
}
bool allt(string a, char x)
{long long p=0;
    while (p<a.size())
    {
        if (a[p]!=x)break;
        p++;
    }
    return p==a.size();
}
 
void solve()
{
    long long n,c;
    cin>> n;
    string a;
    cin>> a;
    if (  x_bet_y (a,'0','1' ) or x_bet_y (a,'1','0' )  or allt(a,'0') or allt(a,'1')) cout << 1 << endl;
    else cout << 2 << endl;
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
