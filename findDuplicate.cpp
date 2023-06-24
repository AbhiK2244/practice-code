#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int n= 5;
    int ans = 0;
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++) 
        cin>> a[i];
    for (int i = 0; i < n ; i++)
    {
        ans = ans ^ a[i];
    }
    for (int i = 1; i < n ; i++)
    {
        ans = ans ^ i;
    }

    cout << endl << "The duplicate is: " << ans;
    
    
    return 0;
}