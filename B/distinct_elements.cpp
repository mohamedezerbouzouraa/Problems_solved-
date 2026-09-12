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
    vector<long long > b(n);
    vector<long long > x(n);
    bool ft=true;
    long long m;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i==0){x[0]=1;}
        else
        {if (b[i]-b[i-1]==1){x[i]=x[i-1];}
            else if (b[i]-b[i-1]==(i+1))
            {if (ft==true)
            {
                x[i]=x[i-1]+1;
                m=x[i]+1;
                ft=false;
            }
                else
                {
                    x[i]=m;
                    m+=1;
                }


            }
            else {x[i]=x[i-(b[i]-b[i-1])];}
        }
    }
    for (long long i=0;i<n;i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
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
