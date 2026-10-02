#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    if (n < 2) return false;
    if (n < 4) return true;           // 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
 
void solve()
{
    string s;
    string t;
 
    cin >>s;
    cin >>t;
    vector<char>s1(s.length());
    vector<char>s2(t.length());
    for (long long i = 0; i < s.length(); i++)
    {
        s1[i] = s[i];
    }
    for (long long i = 0; i < t.length(); i++)
    {
        s2[i] = t[i];
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    vector<char>s3;
    long long x=0;
    for (long long i = 0; i < s2.size(); i++)
    {
        if (x<s1.size())
        {
            if (s2[i]==s1[x])
            {x++;
 
            }
            else if (s2[i]<s1[x])
            { s3.push_back(s2[i]);
            }
            else
            {
                cout << "Impossible\n";
                return;
            }
        }
        else
        { for (long long j=i;j<s2.size();j++)
        {s3.push_back(s2[j]);}
            break;
        }
 
        }
    if (x<s1.size()){cout<<"Impossible"<<endl;return;}
 
    long long p=0;
    bool done=false;
    long long h=0;
    while (p<s3.size())
    {
 
            if (s3[p]<s[h])
            {
                cout << s3[p];p++;
            }
            else
            {
                while (h<s.size()){if (s[h]>s3[p])
                {
                    break;
                }
                    else
                    {
                        cout << s[h];h++;
                    }}
                if (h==s.size())
                {
                    for (long long j=p;j<s3.size();j++)
                    {
                        cout << s3[j];
                    }
                    break;
                }
                }
 
 
 
    }
    while (h < s.size()) cout << s[h++];
    cout<<endl;}
 
 
 
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
