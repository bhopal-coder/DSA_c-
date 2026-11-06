// BRUTE FORCE:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10]={4,5,3,7,1,2};
//     int n=6;
//     int maxprod=1;
//     for(int i=0;i<n;i++)
//     {
//         int prod=a[i];
//         for(int j=i+1;j<n;j++)
//         {
//            prod=prod*a[j];
//            maxprod=max(maxprod,prod);
//         }
//     }
//     cout<<maxprod;
//     return 0;
// }
// OPTIMIZED (PREFIX AND SIFFIX SXAN):
#include <iostream>
using namespace std;
int main()
{
    int a[10]={4,5,3,7,1,2};
    int n=6;
    int pre=1;
    int suff=1;
    int maxprod=a[0];
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suff==0) suff=1;
        pre=pre*a[i];
        suff=suff*a[n-1-i];
        maxprod=max(maxprod,max(pre,suff));
    }
    cout<<maxprod;
    return 0;
}