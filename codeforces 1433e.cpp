#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn=110;

ll f[maxn];

int main()
{
    int n;
    
    f[0]=1;
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    f[i]=f[i-1]*i;
    
    ll ans=f[n]/f[n/2]/f[n/2];
    ans*=f[n/2-1];
    ans*=f[n/2-1];
    ans/=2;
    
    cout<<ans<<endl;
    
    
    
    
    /*
    입력2
    
    출력1
    
    입력4
    
    출력3
    
    입력8
    
    출력1260
    
    입력20
    
    출력12164510040883200
    
    
    
    
    */
    
}
