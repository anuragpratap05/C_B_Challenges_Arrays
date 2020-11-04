# C_B_Challenges_Arrays
#include <iostream>
using namespace std;
int a[1000000], l[1000000], r[1000000];
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    l[0] = a[0];
    r[n - 1] = a[n - 1];
    int leftmax = 0, rightmax = 0;
    for (i = 1; i < n; i++)
    {
        l[i] = max(l[i - 1], a[i]);
    }
    
    /*for(int i=0;i<n;i++)
    {
        cout<<l[i]<<" ";
    }
    cout<<endl;*/
    
    for (i = n - 2; i >= 0; i--)
    {
        r[i] = max(r[i + 1], a[i]);
    }
    
    /*for(int i=0;i<n;i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<endl;*/
    
    int water = 0;
    for (i = 0; i < n; i++)
    {
        water += (min(l[i], r[i]) - a[i]);
    }
    cout << water;

    return 0;
}
