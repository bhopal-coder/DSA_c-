#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s="Hello Everyone";
    string e="";
    for (char c:s)
    {
        if(c!=' ')
        {
            e+=c;
        }
    }
    cout<<e;
    return 0;
}