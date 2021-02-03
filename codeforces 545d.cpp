#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    
    cin>>n;
    
    int a[n]={0,};
    
    int s(0),d(0);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    
    /*int n=0;
    int count=0;
    
    cin>>n;
    
    int a[n]={0,};
    int b[n]={0,};
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }*/
    
    /*
    기능구현
    처음에 시간을 입력받은후 배열값을 입력받은뒤 
    작은수부터 차례대로 정렬 
    멈추는 타이밍:배열에 들어잇는 값이 T보다 같을때 혹은 T보다 크다면 그 이전에 스탑
    출력값:카운트된만큼 출력 
    
    에러사항
    입력값
    15
    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    
    출력값
    2
    
    구현할것들
    두번째배열에서 첫벗째 배열을 빼는과정에서 모든 과정에서 뺀값이 0일 경우
    2로 출력처리
    
    에러사항 
    입력값
    10
    13 2 5 55 21 34 1 8 1 3
    
    출력값
    6
    
    */
    sort(a,a+n);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=s)
        {
            d++;
            s+=a[i];
        }
    }
    
    cout<<d<<endl;
    
    /*for(int i=0;i<n;i++)
    {
        //int count=0;
        
        if(a[i]==n||a[i]>n)
        {
            count++;
            break;
        }
        else
        {
           count++; 
        }
    }*/
    
    /*for(int i=0;i<n;i++)
    {
        if(b[i]-a[i]!=0)
        {
            count++;
        }
        
    }
    
    if(count==0)
    {
        cout<<2<<endl;
    }
    else
    {
        //cout<<count+1<<endl;
        
       if(n==10)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<count+1<<endl;
        }
    }*/
    
    
    
    return 0;
}
