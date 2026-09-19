#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

vector<vector<int>> v = {
    {6,2,4,4,3,4,5,3,6,5},
    {2,2,1,2,2,1,1,2,2,2},
    {4,1,5,4,2,3,4,2,5,4},  
    {4,2,4,5,3,4,4,3,5,5}, 
    {3,2,2,3,4,3,3,2,4,4},  
    {4,1,3,4,3,5,5,2,5,5},  
    {5,1,4,4,3,5,6,2,6,5}, 
    {3,2,2,3,2,2,2,3,3,3},  
    {6,2,5,5,4,5,6,3,7,6},  
    {5,2,4,5,4,5,5,3,6,6}   
};

void solve()
{
    long long n,x,y;
    cin>>n>>x>>y;
    string s, t;
    cin>>s;
    cin>>t;
    bool p=false,nnn=false;
    for(int i=0;i<(int)s.length();i++)
    {
        long long t1=s[i]-'0';
        long long t2=t[i]-'0';
        if (t1!=t2)
        { if (p==false)
        {
            long long erase_needed = v[t1][t1] - v[t1][t2];
            long long add_needed   = v[t2][t2] - v[t1][t2];
            if (x>=erase_needed and y>=add_needed){x-=erase_needed;y-=add_needed;}
            else if (x>=add_needed and y>=erase_needed){x-=add_needed;y-=erase_needed;}
            else{p=true;}
        }
            if (p==true)
            {long long j;
                for ( j=0;j<10;j++)
                {if (j==t1 or j==t2){}
                    else
                    {
                        long long erase1 = v[t1][t1] - v[t1][j];
                        long long add1   = v[j][j]   - v[t1][j];
                        long long erase2 = v[t2][t2] - v[t2][j];
                        long long add2   = v[j][j]   - v[t2][j];
                        if (erase1+erase2<=x and add1+add2<=y){x-=(erase1+erase2);y-=(add1+add2);break;}
                        else if (erase1+erase2<=y and add1+add2<=x){y-=(erase1+erase2);x-=(add1+add2);break;}
                    }

                }
                if (j==10){nnn=true;break;}
                else{p=false;}
            }
        }
    }
    if (nnn==true){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
