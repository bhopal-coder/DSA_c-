#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> st;
    stack<char> s1;
    string res="";
    string s="Hello Everyone@";
    for (int i=0;i<s.length();i++)
    {
        if(isalnum(s[i]) || s[i]==' ')
        {
          st.push(s[i]);
        }
    }

    while(!st.empty())
    {
        s1.push(st.top());
        st.pop();
    }
    while(!s1.empty())
    {
      res+=to_string(s1.top())+" ";
      s1.pop();
    }
    cout<<res;
    return 0;
}