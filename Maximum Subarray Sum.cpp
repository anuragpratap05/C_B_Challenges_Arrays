# C_B_Challenges_Arrays
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
        sum=0;
         ans=max(ans,sum);
        //cout<<"sum="<<sum<<" "<<"ans="<<ans<<endl;
    }
    cout<<ans<<endl;
    }
}
