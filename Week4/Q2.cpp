#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int partition(int arr[],int start,int end)
{
      int pos=start;
      int temp;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=arr[end])
        {
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            pos++;
        }
    }
    temp=arr[pos];
    arr[pos]=arr[end];
    arr[end]=temp;
    return pos;
}
int randomPartition(int arr[], int start, int end) {
    int randomIndex = start + rand() % (end - start + 1); 
    swap(arr[randomIndex], arr[end]);  
    return partition(arr, start, end);  
}
void quick_sort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int pivort=randomPartition(arr,start, end);
    quick_sort(arr,start,pivort-1);
    quick_sort(arr,pivort+1,end);

}
int main()
{
    srand(time(0));
    int arr[10]={9,8,6,7,4,1,2,3,5,0};
    quick_sort(arr,0,9);
    cout<<"sorted array";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i];
    }
    
}