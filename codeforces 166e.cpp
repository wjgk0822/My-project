#include <bits/stdc++.h>
using namespace std;

//int dp[n][4];

int main()
{
    int n;
    int i;
    int m=1000000007;
    
    
    //long long int t;
    long long int a,b,c,d,x;
    //long long int subt;
    
    //cin>>t;
    cin>>n;
    
    int dp[n][4];
    
    dp[1][0]=dp[1][1]=dp[1][2]=1;
    dp[1][3]=0;
    
    for(i=2;i<=n;i++)
    {
        a=dp[i-1][0]%m; b=dp[i-1][1]%m;
        c=dp[i-1][2]%m; d=dp[i-1][3]%m;
        
        x=a+b+c;
        dp[i][3]=x%m;
        
        x=b+c+d;
        dp[i][0]=x%m;
        
        x=a+c+d;
        dp[i][1]=x%m;
        
        x=a+b+d;
        dp[i][2]=x%m;
        
    }
    
    cout<<dp[n][3]<<endl;
    
    
    
   /* n=t-1;
    
    if(t%2!=0)
    {
    
    if(n==0)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<2*t<<endl;
    }
    }
    else
    {
       subt=(n+1)*(2*n-1)+1;
       
       cout<<subt<<endl;
        
    }*/
    
    return 0;
}
