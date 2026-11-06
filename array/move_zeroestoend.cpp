#include <iostream>
using namespace std;
int main()
{
    int a[6]={0,1,4,0,5,2};
    int n=6;
    int pt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[pt],a[i]);
            pt++;
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }

    return 0;
}