#include <bits/stdc++.h>
#define MAX 2000005
using namespace std;

vector<int> graph[MAX];
int visited[MAX],color[MAX];

void addEdge(int v,int w)
{
    graph[v].push_back(w);
    graph[w].push_back(v);
}
//->모서리 추가하는 함수. 

bool bipartite(int src)
{
    memset(color,0,sizeof(color));
    memset(visited,0,sizeof(visited));
    
    color[src]=1;
    visited[src]=1;
    
    queue<int> q;
    q.push(src);
    
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(color[u]==1)
            {
                if(color[v]==1)return false;
                else color[v]=2;
            }
            if(color[u]==2)
            {
                if(color[v]==2)return false;
                else color[v]=1;
            }
            if(!visited[v]){visited[v]=1;q.push(v);}
                
                
            }
        }
        return true;
    //}
}
//->모서리를 만들수 있는지의 여부와 그외에 잡다한 알고리즘 

int main()
{
    
    /*
    6개의 숫자 5개의 모서리 
    입력
    6 5 
    1 5 
    2 1 
    1 4
    3 1 
    6 1 
    
    출력 
    YES
    10100
    
    구현해야될것들 
    
    2가지의 경로가 안나오면 no 
    이진수출력 과정 
    맨처음엔 무조건1로 시작
    두번째 라인에서 모서리부분이 첫스타트 라인으로 되돌아오면 0 
    
    a[i][m]==a[i+1][m+1] 
    a[i+1][m]==a[i+1][m+1]
    print 0 
    
    a[i][m]!=a[i+1][m+1]
    
    print 1 
    
    
    런타임 에러 뭐야아아아아아아앙 ㅠ.ㅠ 21년 2월8일 에러사항 
    
    */
    
    int n,m;
    
    //int d=2;
    
    cin>>n>>m;
    
    //int a[m][d];
    vector<pair<int,int>>vec;
    
    for(int i=1;i<=m;i++)
    {
       int u,v;
       cin>>u>>v;
       addEdge(u,v);
       vec.push_back({u,v});
        
    }
    //->모서리를 생성하고 벡터에 u,v값을 집어넣은 과정 
    
    if(!bipartite(1))cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<vec.size();i++)
        {
            if(color[vec[i].first]==1)cout<<"1";
            else cout<<"0";
        }
    }
    //->모서리를 만들수 있는지 판별하고 만들수 있을시 u,v값에 따른 이진수 출력 과정 
    
    
    /*if(m<2)
    {
        cout<<"NO"<<endl;
        
        
    }
    else
    {
        cout<<"YES"<<endl;
    }*/
    
    /*for(int i=0;i<m;i++)
    {
        for(int j=0;j<d;j++)
        {
            if(a[i][j]==a[i+1][j+1]||a[i+1][j]==a[i+1][j+1])
            {
                cout<<1; 
                break;
            }
            else
            {
                cout<<0;
                break;
            }
            
        }
    }*/
    
    //for()
    
    /*if(m<2)
    {
        cout<<"NO"<<endl;
        
        
    }
    else
    {
        cout<<"YES"<<endl;
    }*/
    
    

    
    return 0;
}
