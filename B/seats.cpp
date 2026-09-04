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
    long long ans = 0;
    long long i=0;
    if (n==1){cout<<1<<endl;return;}
    else{
        bool firsttime=true;
        while(i<n){
            if (s[i]=='1')
            {
                ans++;
                firsttime=false;
                i++;
            }
            else
            {long long x=0;
                while (i<n and s[i]=='0')
                {x++;
                    i++;
                }
                if (firsttime and i==n){cout<<(long long )((x+2)/3)<<endl;return;}
                else if (firsttime){
                    if (x%3==0 or x%3==1){ans=ans+(long long )(x/3);}
                    else{ans=ans+(long long )(x/3)+1;}


                }
                else if (i==n){
                    if (x%3==0 or x%3==1){ans=ans+(long long )(x/3);}
                    else{ans=ans+(long long )(x/3)+1;}}
                else
                {
                    ans=ans+(long long)(x/3);
                }

            }


        }
        cout << ans << endl;
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
