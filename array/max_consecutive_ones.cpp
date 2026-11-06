#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,1,0,0,1,1,1,0};
    int n=8;
    int currc=0;
    int maxc=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==1)
      {
        currc++;
        maxc=max(maxc,currc);
      }
      else
      {
        currc=0;
      }
    }
    cout<<maxc;
    return 0;
}