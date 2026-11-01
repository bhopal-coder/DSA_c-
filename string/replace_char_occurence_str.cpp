#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string res;
    string s="Hello";
    unordered_map<char,int> counts;
    for(char c: s)
    {
        counts[c]++;
        
    }
    for(char ch:s)
    {
        res+=to_string(counts[ch]);
    }
    cout<< res;
    return 0;
}