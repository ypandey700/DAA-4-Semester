#include<iostream>
using namespace std;
void common(int arr[],int n , int brr[],int m)
{
    int i=0,j=0;
    bool flag =false;
    while(i<n && j<m)
    {
        if(arr[i]==brr[j])
        {
            flag=true;
            cout<<arr[i]<<",";
            i++;
            j++;
        }
        else if(arr[i]<brr[j]) i++;
        else j++;
    }
    if(flag==false) cout<<"no common element";
}
int main()
{
    int arr[6]={0,1,2,3,4,5};
    int brr[9]={0,2,4,5,6,7,8,9,10};
    int n=6;
   int  m=9;
   common(arr,n,brr,m);
}