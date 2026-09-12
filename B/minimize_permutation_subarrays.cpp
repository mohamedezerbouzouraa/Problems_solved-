#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    int n;
    cin >> n;
    vector<long long> p(n);
    vector<long long> t(3);
    for (int k = 0; k < n; k++)
    {
        cin >> p[k];

        if (p[k]==1)t[0]=k;
        else if (p[k]==2)t[1]=k;
        else if (p[k]==n)t[2]=k;
    }
    if (n==3 )
    {
        if (t[2] == 1) {cout << 1 << " " << 1 << endl;return;
        }
        else if (t[0] == 1) {cout << t[0]+1 << " " << t[2]+1 << endl;return;
        }
        else {cout << t[1]+1 << " " << t[2]+1 << endl;return;
        }
    }
    else{
        if (t[2]<max(t[0],t[1]) and t[2]>min(t[0],t[1]))
        {

            if (n-1-max(t[0],t[1]) > min(t[0],t[1])){cout<<min(t[0],t[1])+1<<" "<<1<<endl;return;}
            else{cout<<max(t[0],t[1])+1<<" "<<n<<endl;return;}
        }
        else
        {
            if (t[2]==0 or t[2]==n-1)
            {
                if (t[2]==0){cout<<min(t[0],t[1])+1<<" "<<1<<endl;return;}
                else{cout<<max(t[0],t[1])+1<<" "<<n<<endl;return;}
            }
            else if (t[2]<t[0] and t[2]<t[1]){cout<<min(t[0],t[1])+1<<" "<<1<<endl;return;}
            else{cout<<max(t[0],t[1])+1<<" "<<n<<endl;return;}
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
