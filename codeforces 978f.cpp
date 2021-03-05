#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    int ans[n]={},val[n]={},vv[n]={};
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>vv[i];
        v.push_back(make_pair(vv[i],i));
    }
    sort(all(v));
    //->n과k를 입력받고 vv배열에 프로그래머의 스킬을 입력받은후 새로운 벡터에다가 저장하는 과정 
    while(k--){
        int u,v;
        cin>>u,v;
        u--,v--;
        val[u]+=(vv[v]<vv[u]?1:0);
        val[v]+=(vv[u]<vv[v]?1:0);
    }
    //->몇쌍을 만들것인지 입력을 받은후 그 수만큼 u,v값을 할당받은후 새로운 배열인 val배열에 u,v번째 에 
    //들어있는 값들을 비교하여 그 값에따라 val배열에 0이나 1을 저장하는 과정 
    for(int i=0;i<n;i++){
        int l=0,r=n-1,mid,gg=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid].first>=v[i].first){r=mid-1;gg=mid;}
            else {l=mid+1;}
        }
        if(gg==-1){ans[v[i].second]=n-1-val[v[i].second];}
        else {ans[v[i].second]=gg-1-val[v[i].second];}
    }
    for(int i=0;i<n;i++) cout<<ans[i]+1<<" ";
    //->마지막으로 l r mid gg라는 변수를 만들고 l과 r의 값에따라 만일 l<=r일경우 mid변수에 둘을 더한값에
    //2로 나눈값을 저장하고 처음에 프로그래머의 능력과 순서번째를 입력받았던 순서쌍 v벡터에 
    //첫번째배열에 저장되어있는 값이 mid번째가 i번째보다 클경우 
    //r과 gg의 값이 변경되고
    //이외의 경우에는 l값만 업데이트 
    //이후 gg에 저장되어있는 값이 -1일경우 v[i].second번째 배열에 n-1-val[v[i].second]값을 저저장하고
    //그 이외의 경우에는 v[i].second번째 배열에 gg-1-val[v[i].second]값을 저장한다. 
    /*int n,k;
    
    int count;
    
    cin>>n>>k;
    
    int a[n];
    int b[k][2];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<2;i++)
        {
            cin>>b[j][i];
            
            //int k[i]=b[j][i];
        }
    }*/
    
    //}
    
    //count=0;
    //처리과정 구현해보기 
    //흐음...
   /* for(int i=0;i<n;i++)
    {
        count=0;
       for(int j=0;j<k;j++)
       {
           for(int i=0;i<2;i++)
           {
               //count=0;
               
               
               
               if(a[i]>a[b[j][i]-1]&&a[i]!=a[b[j][i]])
               {
                   count++;
                   if(a[i]>a[b[j][i]])
                   {
                       count++;
                   }
               }
               
               
           }
       }
       
       cout<<count<<" ";*/
       
       /*if(count==1)
       {
           if(i==1||i==2)
           {
               cout<<0<<" ";
           }
           if(i==3)
           {
               cout<<1<<" ";
           }
           if(i==4)
           {
               cout<<2<<endl;
           }
       }*/
   // }
    
    
    
    
    /*
    첫라인에 n과k를 입력받고 
    두번째 라인은 연속되는 숫자들이 포함되어있다.
    ri는 i번째 프로그래머의 능력과 동일하다.
4 2
10 4 10 15
1 2
4 3

0 0 1 2 

//4명의 프로그래머의 스킬수준을 입력받고
//두쌍의 pair를 입력받은후 
//멘토가 될수있는 수를 출력한다. 

//유레카!!! 
//->풀어써보자면 흠흠.. 예를들어 i=1일경우 1번째 프로그래머의 능력을 각각의 x번째와 y번째 프로그래머 들과 
//능력을 비교하며 만일 1번째보다 작은 프로그래머를 발견한다면 멘토의 카운트를 1 증가시킨다. 
//이런식으로 경쟁을 해가면서 누적된 카운트를 마지막에 출력하고 그다음 프로그래머의 레벨을 다시 쌍끼리 비교해가며 
//멘토수를 결정한다. 
//단 자기가 속해잇는 쌍과 그주변의 프로그래머들과 경쟁을 한다면 카운트에서 제외. 
//(x,y) (y,x) 이런애들은 싹다 제외시킴. 



10 4
5 4 1 5 4 3 7 1 2 5
4 6
2 1
10 8
3 5

5 4 0 5 3 3 9 0 2 5 

에러사항 
0 0 까지는 출력이 되나 그 이후론  증가가 되질않고 전부 0이 출력되어버림 
어찌해야 숫자가 증가할라나...
결국 여기에서 막히는군...ㅠ.ㅠ 

    */
    
    
    
    
    
    
    
    return 0;
}
