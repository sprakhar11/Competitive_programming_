    #include <bits/stdc++.h>
    using namespace std;
    bool isOperand(char c)
    {
        if (c == '+' || c == '-' || c == '*' || c == '/')
            return false;
        else
            return true;
    }
    int precedence(char c)
    {
        if (c == '^')
            return 3;
        else if (c == '*' || c == '/')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return 0;
    }
    string infixToPostfix(string infix)
    {
        stack<char> stack;
        string postfix;
        for (int i = 0; i < infix.length(); i++)
        {

            if (precedence(infix[i]) > precedence(stack.top()))
                stack.push(infix[i]);
            else
            {
                postfix += stack.top();
                stack.pop();
            }
        }
        while (!stack.empty())
        {
            postfix += stack.top();
            stack.pop();
        }
        return postfix;
    }
    int main()
    {
        string infix = "a+b-c*d/e+f";
        string ans = infixToPostfix(infix);
        cout << ans << endl;
        return 0;
    }