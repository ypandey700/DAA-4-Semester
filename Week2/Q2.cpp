#include<iostream>
using namespace std;
void sum(int arr[],int n)
{ bool found=false;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k]||arr[j]+arr[k]==arr[i]||arr[i]+arr[k]==arr[j])
                {
                    cout<<"tripletes indexes are"<<i<<","<<j<<","<<k<<endl;
                    found=true;
                }
            }
        }
    }
    if(found==false)
    {
        cout<<"no sequence present";
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
}
