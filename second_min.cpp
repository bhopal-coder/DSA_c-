#include <iostream>
using namespace std;
int a[]={40,13,20,25,6};
int n=5;
int temp=0;
int main() {
    
    // Write C++ code here
    for(int i=0;i<n;i++)
        {
            int temp=a[0];
            for(int j=i+1;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        swap(a[j],a[i]);
                        temp=a[j];
                    }  
                }
            // cout<<a[i]<<" ";
        }

     int min=a[1];
     cout<<min;
    return 0;
}