#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int k;
    cin>>k;
    
    sort(a,a+n);
    
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        if(a[i]+a[j]>k)
        {
            j--;
        }
        else if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        {
            cout<<a[i]<<" "<<"and"<<" "<<a[j]<<endl;
            j--;
            i++;
        }
    }
}
