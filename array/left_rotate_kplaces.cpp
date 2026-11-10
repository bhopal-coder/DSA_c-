#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int temp[6]={};
    int k=2;
    int n=6;
    int index=0;
    for(int i=0;i<k;i++)
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=0;i<n;i++)
    {
       arr[i-2]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        arr[n-k+i]=temp[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}