#include <bits/stdc++.h>
using namespace std;

#define loop(x,a,b) for(int (x)=(a);(x)<(b);(x)++)
#define rep(x,n) for(int (x)=0;(x)<(n);(x)++)
#define md 1000000007

int arr[100005],k;

int calc(int x)
{
    if(x-k<0)
    {
    return arr[x]=1;
    }
    if(arr[x]!=-1)
    {
    return arr[x];
    }
    
    
    return arr[x]=(calc(x-k)+calc(x-1))%md;
    
}

int main()
{
    ios::sync_with_stdio(false);
    rep(i,100005)
    {
        arr[i]=-1;
    }
    //->0번째부터 n-1번째까지 -1로 셋팅하는 과정
    int t;
    
    //int k;
    
    int a,b;
    
    /*int sum;
    
    int red=0;
    int white=0;
    int count=0;
    int count2=0;*/
    
    cin>>t>>k;
    
    /*while(t--)
    {
        /*
        k의 값에 따른 분류 
        만일 k가 2이라면 두종류의 꽃들이 존재
        k가 3이라면 세종류의 꽃들이 존재 
        k가 어떤값이든간에 반드시 이러한 규칙이 적용
        그룹내 속해잇는 꽃들의 합이 홀수일경우:연속성을 띄우되 굳이 각각의 개수가 같지않아도됨 
        짝수일경우:둘중에 하나만 싹다 채우거나 같은 비율로 존재해야만함.
        홀수든 짝수든 배열방식이 불연속적이면 안됨. 
        
        */
        /*cin>>red>>white;
        
        sum=0;
        sum=red+white;
        
        int a[sum];*/
        
        /*if((red+white)%k==0)
        {
            //구현해야될것. 특정 배열을 전부 레드나 화이트로 채우기 혹은 같은비율로 들어가게끔 채우기 
            //a[i]=red a[n-1]까지 싹다 레드로 혹은 화이트로 채우기 
            //
            for(int i=0;i<sum;i++)
            {
                a[i]=red;
                
                if(i==sum-1)
                {
                    a[i]=red;
                    count++;
                }
            }
            a[sum]=0;
            
            for(int i=0;i<sum;i++)
            {
                a[i]=white;
                
                if(i==sum-1)
                {
                    a[i]=white;
                    count++;
                }
            }
            a[sum]=0;
            
            for(int i=0;i<sum;i++)
            {
                a[i]=red;
                
                if(i==sum-1)
                {
                    a[i]=red;
                    count++;
                }
            }
            a[sum]=0;
            
            for(int i=0;i<sum;i++)
            {
                if(a[i==0]=red)
                {
                    a[i++]=white;
                    count2++;
                    
                    if(sum/2==count2)
                    {
                        a[i]=red;
                    }
                    
                    count++;
                    
                }
            }*/
            
            /*
            막히는 부분:어느정도의 경우의 수는 구현가능하나 그 이외의 경우 
            rwwr wrrw rrww wwrr 저 4가지의 경우의 수를 어떻게 하면 하나의 function만으로 구현해낼수 있을것인가. 
            */
            
            
            
            
            
            
            
        //}*/
        rep(i,100005)
        {
            calc(i);
        }
        //->i=1부터 100005까지 calc함수를 통해서 숫자를 집어넣는 과정 
        loop(i,1,100003)
        {
            arr[i]=(arr[i-1]+arr[i])%md;
        }
        //->i=1부터 100003까지 해당 배열에 i-1과 i번째에 들어가는 값들을 더한후 md로 나누고 나머지를 저장하는  과정 
        rep(i,t)
        {
            cin>>a>>b;
            cout<<(arr[b]-arr[a-1]+md)%md<<endl;
        }
        //->i=1부터 t까지 해당하는 배열에 b번째 배열에서 a-1번째 배열을 뺀후 md를 더하고 그값을 다시 md로 나누고 나머지를 마지막에 출력하는 과정 
        
        
        
        
    //}
    
    
    
    return 0;
}
