# C_B_Challenges_Arrays
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
    
    sort(a,a+n);
    
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    
    int k;
    cin>>k;
    
    for(int i=0;i<n-2;i++)
    {
        int l=i+1;
        int r=n-1;
        
            while(l<r)
            {
                if(a[i]+a[l]+a[r]>k)
                {
                    r--;
                }
                else if(a[i]+a[l]+a[r]<k)
                {
                    l++;
                }
                else
                {
                    cout<<a[i]<<","<<" "<<a[l]<<" "<<"and"<<" "<<a[r]<<endl;
                    l++;
                    r--;
                }
            }
            
        
    }
}
