#include <bits/stdc++.h>
using namespace std;

map<int,int>dp;
int a[200005];

void ans(int endi,int pos){
    if(pos<0)
    return;
    
    if(a[pos]==endi){
        ans(endi-1,pos-1);
        cout<<pos+1<<" ";
    }
    else
    {
        ans(endi,pos-1);
    }
}

int main()
{
    int length=0;
    
    int maxi=0,endi,endi_index;
    
    cin>>length;
    
    //int a[length]={0};
    
    for(int i=0;i<length;i++)
    {
        cin>>a[i];
        dp[a[i]]=0;
        
    }
    
    for(int i=0;i<length;i++)
    {
        dp[a[i]]=dp[a[i]-1]+1;
        
        if(dp[a[i]]>maxi){
            endi_index=i;
            endi=a[i];
            maxi=dp[a[i]];
        }
        /*int j=i+1;
        
        if((a[i]<a[j])&&(a[j]>a[i+2]))
        {
            
            length=length-3;
            
            if(length%2==1)
            {
                length=length-1;
            }
            else
            {
                length=length;
            }
            
            /*
            a[length]에서 a[j]~a[i+2]까지 해당하는 배열 빼는것 구현 해보기 
            a[length--] if(a[legth==length-3]) break;
            
            
            */
       /* }
        if(a[i]>a[j])
        {
            if((a[i]-a[j])>(a[i+2]-a[j]))
            {
                length=length-3;
                
                if(length%2==1)
            {
                length=length-1;
            }
            else
            {
                length=length;
            }
            }
        }*/
    }
    
    cout<<maxi<<endl;
    
    //새로운 배열에 숫자넣기
    /*
    a[length]={1 3 5 6}
    4,7이 제거되어야만 함 이후 갱신
    
    */
    
    ans(endi-1,endi_index-1);
    cout<<endi_index+1<<endl;
    
   /* for(int i=0;i<length;i++)
    {
        cout<<a[i];
        cout<<" ";
        if(i==length)
        {
            //cout<<a[i];
            cout<<endl;
        }
    }*/
    
    /*
    연속성 구현
    k뽑아내기
    input
    7
    3 3 4 7 5 6 8
    output
    4
    2 3 5 6 
    1 3 5 6
    
    1.print any number in first array 
    2.create a[k] and print a[k] elements (연속적 성질 가지는)
    3.반드시 a[k==0] 자리는 1부터 스타트 
    4.연속성을 방해하는 element 제거
    5.숫자 1을 셋팅한 상태에서 숫자 제거한 다음 배열부터 차레대로 채워나가기 이후 출력(숫자가 점점 커지는 성질)
    6.이후 똑같은 방법으로 반복 수행
    7.연속성 방해하는 elements를 배열에서 제거하기.
    ->vector를 이용하여 지우기
    ->stack을 이용하여 지우기
    ->시작점과 멈추는점 지정구현(막힘);;;;;
    ->각각 앞뒤 뺏셈진행후 1보다 클경우 그 지점부터 시작점?
    ->
    8.최초값은 무조건 1 집어넣기
    9.

    */
    
    
    return 0;
}
