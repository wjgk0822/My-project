#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n=0,k=0;
    long long int i,j;
    int t;
    //unsigned long int count=0;
    long long int subk=0;
    //vector<int>a;
    
    //cin>>t;
    cin>>t;
    
    //for(int b=0;b<t;b++)
    //{
    
    //while(t--)
    //{
    while(t!=0)
    {
    
    cin>>n>>k;
    
    
    subk=n;
    
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i<=k)
            {
            subk=min(subk,n/i);
            }
            if(n/i<=k)
        {
            subk=min(subk,i);
        }
        }
        //if(n/i<=k)
        //{
           // subk=min(subk,i);
        //}
    }
    
    cout<<subk<<endl;
    
    //}
    
    //for(int b=0;b<t;b++)
    //{
    
    /*if((n-k==1)&&(n>=100))
    {
        cout<<n<<endl;
        
        //return 0;
    }
    else if(n==k)
    {
        cout<<1<<endl;
    }
    
    else if(k==1)
    {
        cout<<n<<endl;
    }
    
    else
    {
    //i=subn,j=k;
    
    //if((i>=1)&&(i<=k))
    //{
        for(i=1;i<=k;i++)
        {
            for(j=k;j>=1;j--)
            {
                if(i*j==n)
                {
                    a.push_back(j);
                    
                    count++;
                    
                }
                
                
            }
        }
        
        //cout<<a[0]<<endl;
    //}
    if(count>0)
    {
        //if(a[])
        subk=a[count-1];
        
        cout<<subk<<endl;
        //a.push_back(0);
        //break;
        //a={0};
    }
    else
    {
        cout<<n<<endl;
        //break;
        //count=0;
        //a={0};
    }
    }*/
    
    t--;
    }
    //}
    //}
    
    return 0;
}
