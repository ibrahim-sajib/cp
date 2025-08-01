#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define pf push_front
#define mk make_pair
#define endl "\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / __gcd(a, b) * b)

#define all(x) x.begin(), x.end()
#define mx 1000001
#define mod 1000000007
#define MAX 1000001
bool prime(ll n)
{
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return true;
    }
  }
  return false;
}
void solve()
{
 
    ll   a,b,c,d,e,f, i, j, k, n, m, p,t, q, u, v;
 
    cin >> n;
    set<ll> s;
    
    while (n)
    {
      ll rem = n % 10;
      s.insert(rem);
      n /= 10;
      
    }
    

    cout << *begin(s) <<  endl;
}
 

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t, c, n, i, j;

  cin >> t;

  // c=1;

  while (t--)
  {
    // cout<<"Case "<<c<<": ";

    // c++;

    solve();
  }
  return 0;
}
