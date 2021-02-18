#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    int suma=0;
    int sumb=0;
    
    int subn=0;
    
    int n;
    
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
       cin>>n; 
       int a[n];
       
       subn=n/2;
       
       if(subn%2==1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
           for(int i=0;i<subn;i++)
           {
               a[i]=2*(i+1);
               
               suma=suma+a[i];
           }
           
           for(int i=0,j=subn;j<n;i++,j++)
           {
               
               //a[j]=2*(i+1)-1;
               
               if(j<n-1)
               {
                a[j]=2*(i+1)-1;   
                sumb=sumb+a[j];
               }
               
               //a[j==n-1]=suma-sumb;
               if(j==n-1)
               {
                   if(n>=8)
                   {
                   a[j]=suma-sumb-5;
                   
                   break;
                   }
                   else
                   {
                       a[j]=suma-sumb;
                   }
               }
               
               //a[n-1]=suma-sumb;
               
               //if(j==n-1)
               //{
                   /*for(int j=subn;j<n-1;j++)
                   {
                       //a[j]=a[j]+a[j+1];
                       sumb=sumb+a[j];
                       
                       
                   }
                   if(j==n-1)
                   {
                       a[j]=suma-sumb;
                   }*/
                   
                   //a[n-1]=suma-su
               //}
               
           }
           
           //a[n-1]=suma-sumb;
           
           for(int k=0;k<n;k++)
           {
               cout<<a[k]<<" ";
               
               if(k==n-1)
               {
                   cout<<endl;
               }
           }
       }
       
    }
    /*
    출력 파트 구현하기
5
2
4
6
8
10



    */
    
    
    return 0;
}
