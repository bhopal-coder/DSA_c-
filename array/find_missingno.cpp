#include <iostream>
using namespace std;
int main()
{
    int arr[5]={0,2,5,1,4};
    int n=5;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int j=0;j<=n;j++)
    {
        if(arr[j]!=j)
        {
            cout<<j;
            break;
        }
    }
    return 0;
}
