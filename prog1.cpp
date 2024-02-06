//Reverse the array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes
        int start = 0;
        int end = str.size() - 1;
        while (start <= end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        return str;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
