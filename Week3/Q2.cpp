#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    int compare=0;
    int shift=0;
    int temp;
    for(int i=0;i<n-1;i++)
    {
       int index=i;
        for(int j=i+1;j<n;j++)
        {
               compare++;
            if(arr[index]>arr[j])
            {
                index=j;
            }
        }
        if(i!=index){
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            shift++;
        }
            
    }
    cout<<" sorted array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"number of shifts"<<shift<<endl;
    cout<<"number of compare"<<compare;
}
int main()
{
    int arr[10]={9,3,2,8,6,4,5,0,1,7};
    int n=10;
    selection_sort(arr,n);
}