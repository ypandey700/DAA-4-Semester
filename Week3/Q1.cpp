#include<iostream>
using namespace std;
 void insertion_sort(int arr[],int n)
 {
    int compare=0;
    int shift=0;
    int temp;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            compare++;
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                shift++;
            }
            else 
            {
                break;
            }
        }
    }
    cout<<"sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"number of sifts are"<<shift<<endl;
cout<<"number of compare"<<compare;
 }
int main()
{
    int arr[10]={4,7,8,1,3,0,6,2,5,9};
    int n=10;
    insertion_sort(arr,n);
}