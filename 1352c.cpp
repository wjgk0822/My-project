#include <bits/stdc++.h>
using namespace std;

//long long int maxi=100000000000;
//long long int n,k;

/*int binarysearch(int arr[],int start,int end,int key)
    {
        key=0;
        int count=0;
    for(int i=0;i<maxi;i++)
    {
        for(int j=1;j<=maxi;j++)
        {
            arr[i]=j;
            
            if(j%n!=0)
            {
                count++;
                
                if(count==k)
                {
                    key=j;
                    break;
                }
            }
        }
    }
    
    return key;
    }*/

int main()
{
    long long t;
    
    long long n,k;
    cin>>t;
    
    
    
    
    for(int i=0;i<t;i++)
    {
        //scanf("%d %d",&n,&k);
        cin>>n>>k;
        
        //count=0;
        
        //count=binarysearch(arr,0,maxi-1,key);
        
        //cout<<count<<endl;
        
        long long x=k/(n-1);
        
        if((x+k)%n==0)
        {
            cout<<x+k-1<<endl;
        }
        else
        {
            cout<<x+k<<endl;
        }
        
        //count=0;
        
       /* for(long long int j=1;j<=maxi;j++)
        {
            //count=0;
            
            if(j%n!=0)
            {
                count++;
                
                /*if(count==k)
                {
                    cout<<j<<endl;
                    //break;
                }*/
           /*}
            
            if(count==k)
            {
                cout<<j<<endl;
                
                
                break;
            }
        }*/
    }
    /*
    해결해야될 에러사항
    런타임 에러 
    하... ㅠㅠ 21.02.19 
    
    */
    /*이진탐색 알고리즘 구현*/
    /*for(int j=1;j<=maxi;j++)
    {
        if(j%n!=0)
        {
            key=j;
        }
    }*/
    /*int binarysearch(int *arr,int start,int end,int key)
    {
        key=0;
        count=0;
    for(int i=0;i<maxi;i++)
    {
        for(int j=1;j<=maxi;j++)
        {
            arr[i]=j;
            
            if(j%n!=0)
            {
                count++;
                
                if(count==k)
                {
                    key=j;
                    break;
                }
            }
        }
    }
    
    return key;
    }*/
    
    //count=binarysearch(arr,arr+maxi,key);
    
    //cout<<count<<endl;
    
    /*int binarysearch(int *arr,int start,int end,int key)
    {
        for(int i=0;i<maxi;i++)
        {
            //for(int j=1;j<=maxi;j++)
            //{
            if(arr[i]==key)
            {
               //key=arr[i];
               
               count++;
                
            }
            
            if(count==k)
            {
                break;
            }
            //}
            
            
        }
        
        return count;
    }
    
    cout<<binarysearch(arr,arr+maxi,key)<<endl;*/
    
    
    
    
    
    return 0;
    
}
