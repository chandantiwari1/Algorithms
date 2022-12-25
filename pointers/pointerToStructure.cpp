#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
struct rectangel {
    int length;
    int breadth;
};
void solve()
{
  struct rectangel r;
  struct rectangel *p;
  p= &r;
  (*p).length=10;
  (*p).breadth=10;
  cout<<r.breadth*r.length<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    while(test--)
    {
        solve();
    }
    return 0;
}
