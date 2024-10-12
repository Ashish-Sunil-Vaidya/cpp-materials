#include <iostream>
using namespace std;


class Solution
{

public:
    int top = -1;
    bool isValid(string s)
    {   
        char stack[s.length()];
        int i = 0;
        for(int i=0;s[i]!='\0';i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(' || s[i] == '}' || s[i] == ']' || s[i] == ')')
                stack[++top] =s[i];
            if (top == 0)
                continue;
            if ((stack[top] == '}' && stack[top - 1] == '{') || (stack[top] == ']' && stack[top - 1] == '[') || (stack[top] == ')' && stack[top - 1] == '('))
               top-=2;
        }
        if (top == -1)
            return true;

        return false;
    }
};

int main()
{
    string str = "(){}";
    Solution s;
    if (s.isValid(str))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
