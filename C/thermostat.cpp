#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    long long l,r,x,a,b;
    cin >> l>> r >> x ;
    cin>> a >> b;
    if (a==b){cout<<0<<endl;}
    else{
        if (b+x>r and b-x<l){cout<<-1<<endl;}
        else if (llabs(b-a)>=x){cout<<1<<endl;return;}
        else
        {if (b>a){}
        else
        {
            long long x=a;
            a=b;
            b=x;}
            if (r-a>=x and r-b>=x){cout<<2<<endl;return;}
            else if (r-a>=x)
            {
                if (a-l>=x){cout<<2<<endl;return;}
                else if (b-l>=x){cout<<3<<endl;return;}
                else{cout<<-1<<endl;return;}
            }
            else if (a-l>=x){cout<<2<<endl;return;}
            else{cout<<-1<<endl;return;}

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
