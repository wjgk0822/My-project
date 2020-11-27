#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    int count=0;
    int subcount=0;
    
    cin>>n;
    
    subcount=n;
    
    int a[n][3];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            //int a[n][n];
            
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
              count++;  
            }
            /*if(count>1)
            {
                subcount++;
            }*/
            
            if(j==2)
            {
                if(count>=2)
                {
                    --subcount;
                    
                    //count=0;
                }
                /*if(count==1)
                {
                    subcount=subcount;
                }*/
                //count=0;
                //subcount=0;
            }
            
        }
        count=0;
    }
    
    cout<<subcount<<endl;
    
    
    
    return 0;
}
