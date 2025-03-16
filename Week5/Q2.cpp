# include<vector>
using namespace std;
 void merge(int arr[],int start,int mid,int end)
{
    int left=start;
    int right=mid+1;
 vector<int>temp;
 while(left<=mid && right<=end)
 {
    if(arr[left]<=arr[right])
    {
        temp.push_back(arr[left]);
        left++;
    }
    else
    {
        temp.push_back(arr[right]);
        right++;
    }
}
    while(left<=mid)
    {
      temp.push_back(arr[left]);
      left++;
    }
    while(right<=end)
    {
        temp.push_back(arr[right]);
        right++;
    }
   int i=0;
    while(start<=end)
    {
        arr[start]=temp[i];
        start++;
        i++;
    }

 }
void merge_sort(int arr[],int start,int end)
{
    if(start>=end)
    {
    return;
    }
    int mid=start+(end-start)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
void sum(int arr[],int key,int n)
{
    int i=0;
    int j=n-1;
    int a=0;
   while(i<j)
   {
    if(arr[i]+arr[j]==key)
    {
        cout<<"pairs are"<<i<<" "<<j<<endl;
        i++;
        j--;
        a++;
    }
    else if(arr[i]+arr[j]>key)
    {
        j--;
    }
    else if(arr[i]+arr[j]<key)
    {
        i++;
    }
}
if(a==0)
      cout<<"no pair is found";
}
int main()
{
    int arr[10]={9,4,5,6,1,2,3,0,7,8};
    int n=10;
    int key;
    merge_sort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"enter the key";
    cin>>key;
    cout<<endl;
    sum(arr,key,n);
}