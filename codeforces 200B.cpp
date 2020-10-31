#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100]={0};
    
    int num;
    
    double ave=0;
    
    cin>>num;
    
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<num;i++)
    {
        ave=ave+a[i];
    }
    
    cout<<ave/num<<endl;
    
    return 0;
    
    
    
}
