#include<iostream>
#include<vector>
using namespace std;

void rotateArray( vector<int> &num, int key)
{
    vector<int> v ( num.size());
    for( int j = 0 ; j < num.size() ; j++)
    {
        v[ (j + key) % num.size()] = num[j];
    }
    num = v;
}

vector<int> print( vector<int> num)
{
    for( int i : num)
    cout << i << "  ";
}

int main()
{
    vector<int> v = { 1,2,3,4,5,6}; 
    int key = 2;
    rotateArray(v,key);
    print(v);
}