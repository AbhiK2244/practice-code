#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &ans)
{
    int s = 0;
    int e = ans.size() - 1;
    while (s <= e)
    {
        swap(ans[s++], ans[e--]);
    }
}

vector<int> findArraySum(vector<int> &a, vector<int> &b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    vector<int> ans;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = a[j] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    reverse(ans);
    return ans;
}

int main()
{
    vector<int> a = {9, 9, 9};
    vector<int> b = {9, 9, 9};

    vector<int> ans = findArraySum(a, b);
    for (int i : ans)
        cout << i << "  ";
}