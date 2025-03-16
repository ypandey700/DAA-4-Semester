#include<iostream>
#include<vector>
using namespace std;
int compare=0;
int inversion=0;
void merge(int arr[],int start,int mid,int end)
{
int left=start;
int right=mid+1;
vector<int>temp(end-start+1);
int index=0;
while(left<=mid&& right<=end)
{
    compare++;
      if(arr[left]<=arr[right])
      {
        temp[index]=arr[left];
        index++;
        left++;

      }
      else 
      {
        temp [index]=arr[right];
        index++;
        right++;
        inversion=inversion+(mid-left+1);
      }
}
while(left<=mid)
{
    temp[index]=arr[left];
    index++;
    left++;
}
while(right<=end)
{
    temp[index]=arr[right];
    index++;
    right++;
}
index=0;
while(start<=end)
{
    arr[start]=temp[index];
    start++;
    index++;
}
}
void mergesort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
   int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    int arr[10]={23, 65, 21, 76, 46, 89, 45, 32};
    mergesort(arr,0,7);
    cout<<"sorted array is ";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparsion are"<<compare<<endl;
    cout<<"inversion are "<<inversion;
}