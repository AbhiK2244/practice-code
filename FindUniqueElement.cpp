#include<iostream>
using namespace std;
int main()
{
    int a[10]={8,3,2,5,3,2,8,4,4};
    int size=9;
    int unique = 0;

    for (int i = 0; i < size; i++)
    {
        unique = unique ^ a[i];
    }

    cout<< " unique element is : "<< unique;
    
    return 0;
}