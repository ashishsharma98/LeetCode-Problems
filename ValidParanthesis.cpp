/*
Valid Paranthesis:
=================
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false

*/

#include <iostream>
#include <stack>
using namespace std;

bool isValidParanthesis(string str)
{
    stack<char> st;
    char x;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
            continue;
        }

        if(st.empty())  
            return false;
        switch (str[i])
        {
        case ')':
                    x=st.top();
                    st.pop();
                    if(x=='{' || x=='[')
                        return false;         
                    break;
        case ']':
                    x=st.top();
                    st.pop();
                    if(x=='{' || x=='(')
                        return false;         
                    break;
        case '}':
                    x=st.top();
                    st.pop();
                    if(x=='(' || x=='[')
                        return false;         
                    break;
        }    
    }

    return st.empty();
}

int main()
{
    string str;
    cin >> str;

    if(isValidParanthesis(str))
        cout<<"Valid "<<endl;
    else
    {
        cout<<"Not Validd"<<endl;
    }
    

    
}
