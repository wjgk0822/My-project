#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a;
    int x,y;
    
    cin>>n>>m>>a;
    
    //suba=a;
    
    //int b[n][m];
    //int c[a][suba];
    if(n%a==0)
    {
        x=n/a;
    }
    else
    {
        x=n/a+1;
    }
    
    if(m%a==0)
    {
        y=m/a;
    }
    else
    {
        y=m/a+1;
    }
    
    cout<<x*y<<endl;
    
    /*if(n%a!=0)
    {
        count++;
        
        subn=n%a;
        
        if(subn!=0)
        {
            count++;
        }
        
    }*/
    
    /*while((a>n)&&(suba>m))
    {
        if(a<n)
        {
            a=0+a;
            count++;
        }
        if(suba<m)
        {
           suba=0+suba;
           count++;
        }
    }*/
    
    /*do
    {
        if(a<n)
        {
            a=0+a;
            count++;
        }
        
    }while(a>n);
    
    do
    {
        if(suba<m)
        {
           suba=0+suba;
           count++;
        }
    }while(suba>m);*/
    
    /*if((n==1)&&(m==1))
    {
        cout<<1<<endl;
    }
    else
    {
    cout<<2*count<<endl;
    }*/
    
   /* if((a==n)&&(suba!=m))
    {
        do
        {
            if(suba<m)
            {
                suba=suba+a;
                count++;
            }
            
            
        }while(suba<m);
        
        cout<<count<<endl;
        
        return 0;
    }
    if((suba==m)&&(a!=n))
    {
        do
        {
            if(a<n)
            {
                a=a+a;
                count++;
            }
        }while(a<n);
        
        cout<<count<<endl;
        
        return 0;
    }
    if((a>m)&&(suba>n))
    {
        cout<<1<<endl;
        
        return 0;
        
        
    }
    if((a==m)&&(suba==n))
    {
        cout<<1<<endl;
        
        return 0;
    }
    if((a<n)&&(suba<m))
    {
        if(a<n)
        {
            do
            {
                a=a+a;
                count++;
            }while(a>n);
        }//while(a>n);
        
        if(suba<m)
        {
            do
            {
                suba=suba+a;
                count++;
            }while(suba>m);
        }
        
        //cout<<count<<endl;
        //}
        
        //cout<<count<<endl;
        //}
        
        //return 0;
        
        cout<<count<<endl;
        
        return 0;
        
    }*/
    //cout<<count<<endl;
    
    return 0;
}
