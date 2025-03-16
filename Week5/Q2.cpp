// Given an unsorted array of integers, design an algorithm and
// implement it using a program to find whether two elements exist such
// that their sum is equal to the given key element. (Time Complexity = O(n
// log n))
#include<iostream>
#include<algorithm>
using namespace std;
void sum(int arr[],int n, int key)
{
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    bool flag=false;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(sum==key)
        {
            cout<<arr[i]<<","<<arr[j]<<" Yes two element exists";
            flag=true;
            break;
        }
        else if(sum<key) i++;
        else j--;

    }
    if(flag==false) cout<<"no pair founnd";
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum(arr,n,5);
   
}
