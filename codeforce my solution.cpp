#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   int cnt=0;
   
   string s;
   
   cin>>n;
   
   //for(int i=0;i<n;i++)
   //{
       //cin>>s;
   //}
   
   for(int i=0;i<n;i++)
   {
       cin>>s;
       
       int count=s.length();
       //string s;
       
       //cin>>s;
       
       //cout<<s[0]<<count<<s[n-1]<<endl;
       if(count<=10)
       {
           cout<<s<<endl;
       }
       
      if(count>10)
      {
          
          cout<<s[0]<<count-2<<s[count-1]<<endl;
          
          //break;
      }
   
   
   
    //cout<<s[0]<<count<<s[n-1]<<endl;
    
       
       
   }
   
   /*for(int j=0;j<n;i++)
   {
       if((i>0)&&(i<n-2))
       {
           cnt++;
           
       }
   }*/
   
   
    
    return 0;
}
