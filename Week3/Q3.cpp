#include<iostream>
#include<vector>
using namespace std;
bool merge(int arr[],int start,int mid,int end)
{
int left=start;
int right=mid+1;
bool duplicate=false;
vector<int>temp(end-start+1);
int index=0;
while(left<=mid&& right<=end)
{
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
return duplicate;
}
void mergesort(int arr[],int start,int end)
{
    if(start==end)
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
    int arr[11]={4,2,4,1,3,9,8,6,7,5,0};
    mergesort(arr,0,10);
    int a=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"dupicate are present"<<endl;
            break;
        }
        else {
            a++;
        }
    }
    if(a==0)
    {
        cout<<"duplicate are not present"<<endl;
    }
    cout<<"sorted array is "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
        
    }
}