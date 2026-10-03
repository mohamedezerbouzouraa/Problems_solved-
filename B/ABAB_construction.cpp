#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    string s,s2;
    cin>>s;
    for (long long i = 0; i < n; i++)
    {if (i%2 == 0){s2=s2+'a';}
        else{s2=s2+'b';}
 
    }
    long long l=0,r=n-1;
    for (long long i = 0; i < n;)
    {if (s[i]!='?')
    {
        if (s[i]!=s2[l] and s[i]!=s2[r]){cout<<"NO"<<endl;return;}
        else if (s[i]==s2[r]){r--;}
        else{l++;}
        i++;
    }
        else
        {
            if (s2[l]==s2[r]){l++;}
            else
            {if (i==n-1){break;}
                else if (s[i+1]=='?')
                {long long x=2;
                    while (i+x<n and s[i+x]=='?')
                    {
                        x++;
                    }
                    if (i+x==n){cout<<"YES"<<endl;return;}
                    else
                    { if (x%2==0)
                    {
                        i+=(x-1);
                    }
                        else
                        {
                            if (s[i+x]!=s2[r]){r--;}
                            else{l++;}
                        }
 
                    }
                }
                else
                {
                    if (s[i+1]==s2[r])
                    {l++;
 
                    }
                    else{r--;}
                }
            }
            i++;
        }
 
    }
    cout<<"YES"<<endl;
 
 
 
 
 
 
    }
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
}
