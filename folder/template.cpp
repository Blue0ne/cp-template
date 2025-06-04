#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define gottaGoFast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int N = 1e6 + 5;

bool primes[N];
void sieve(int n)
{
    primes[0] = false;
    for (int i = 1; i <= n; i++) primes[i] = true;

    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i) primes[j] = false;
        }
    }
}

void Bluify()
{
    
}

signed main()
{
    gottaGoFast();
    int t = 1;
    // cin >> t;
    while (t--) Bluify();
    return 0;
}
