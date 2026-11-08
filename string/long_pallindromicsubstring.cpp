#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> substrings;
    string s="babad";
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           substrings.push_back(s.substr(i,j));
        }
    }
    string longest_pall="";
    int maxl=0;
    for (size_t i=0;i<substrings.size();i++)
    {
        string orig=substrings[i];
        string rev=orig;
        reverse(rev.begin(),rev.end());
        if (rev==orig)
        {
           int currl=orig.length();
           if(currl>maxl)
           {
            maxl=currl;
            longest_pall=orig;
           }
        }
    }
    cout<<longest_pall;
    return 0;
}