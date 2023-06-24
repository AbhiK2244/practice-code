#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros( vector<int> num)
{
    int i = 0;
    for( int j = 0 ; j < num.size() ; j++)
    {
        if ( num[j] != 0 )
        {
            swap( num[i], num[j]);
            i++;
        }
    }
    return num;
}

vector<int> print( vector<int> num)
{
    for( int i : num)
    cout << i << "  ";
}

int main()
{
    vector<int> v = { 0,1,3,0,5,4,0};
    vector<int> ans = moveZeros(v);
    print(ans);
}