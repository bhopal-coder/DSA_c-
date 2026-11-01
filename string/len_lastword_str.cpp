#include <iostream>
using namespace std;
int main()
{
    string s="This is a Python Program";
    int leng=0;
    int size=s.length()-1;
    while(size>=0 && s[size]==' ')
    {
        size--;
    }
    while(size>=0 && s[size]!=' ')
    {
        leng++;
        size--;
    }
    cout<<leng;
    return 0;
}