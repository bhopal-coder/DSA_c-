#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s="5347";
    int n=s.length();
    vector<string> subst;
    int index=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
             subst.push_back(s.substr(i,j));
        }
    }
    int maxn=0;
    int n1=subst.size();
    for(int i=0;i<n1;i++)
    {
       int no=stoi(subst[i]);
       if((no%2)!=0)
       {
         maxn=max(maxn,no);
       }
    }
    cout<<maxn;
    return 0;
}