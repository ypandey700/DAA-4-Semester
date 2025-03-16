#include<iostream>
using namespace std;
void differnce(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"no pair present ";
    }
    else 
    {
        cout<<"no. of pairs are "<<count;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the key between 1to9  ";
    cin>>key;
    differnce(arr,n,key);
}