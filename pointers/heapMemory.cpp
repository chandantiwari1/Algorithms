#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int *p = new int[5];
    //initialised a pointer variable array in cplusplus to a variable p
    delete [] p;
    p[0]=10;
    p[1]=20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 40;
    p[5] = 50;
    for(int i=0;i<6;i++)
        cout<<p[i]<<" ";

    
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
