#include<iostream>
using namespace std;
void common(int arr[],int brr[],int n,int m)
{
    int i=0;
    int j=0;
    int a=0;
    while(i<n&&j<m)
    {
        if(arr[i]==brr[j])
        {
            cout<<" common element are "<<arr[i]<<endl;
            i++;
            j++;
            a++;
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
    if(a==0)
    {
        cout<<"no common element";
    }
}
int main()
{
    int arr[6]={0,1,2,3,4,5};
    int brr[9]={0,2,4,5,6,7,8,9,10};
    int n=6;
   int  m=9;
    common(arr,brr,n,m);
}