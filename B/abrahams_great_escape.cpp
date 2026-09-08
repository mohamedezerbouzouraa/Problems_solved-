#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{long long n,k;
    cin >> n >> k;

    vector<vector<char>> a(n,vector<char>(n));

    if (k==(n*n)-1 or k>(n*n)){cout<<"NO"<<endl;return;}
    else
    {cout<<"YES"<<endl;
        bool p=true;
        long long j;
        for (long long i=0;i<n;i++){
        for (j=0;j<n;j++)
        {if (k>0)
        {
            a[i][j]='U';
            k--;
        }
            else{p=false;break;}

        }
            if (p==false)
            {if (j==n-1){a[i][j]='D';}
                else{
                a[i][n-1]='L';
                for (long long tx=j;tx<n-1;tx++)
                {a[i][tx]='R';}
            }
                for (long long q1=i+1;q1<n;q1++)
                {a[q1][n-1]='L';
                    for (j=0;j<n-1;j++)
                    {
                        a[q1][j]='R';
                    }
                }
                break;
            }


        }



    }
    for (long long i=0;i<n;i++)
    {
        for (long long j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
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
