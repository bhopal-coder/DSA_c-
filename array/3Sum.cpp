#include <iostream>
using namespace std;
int main()
{
    int a[]={2,-2,0,3,-3,6};
    
    int n=sizeof(a)/sizeof(a[0]);
    int final[100][3]={};
    int nf=0; 
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    final[nf][0]=a[i];
                    final[nf][1]=a[j];
                    final[nf][2]=a[k];
                    nf++;
                }
            }
        }
    }
    cout<<"[";
    for(int i=0;i<nf;i++)
    {
        cout<<"["<<final[i][0]<<","<<final[i][1]<<","<<final[i][2]<<"]";
    }
    cout<<"]";
    return 0;
}