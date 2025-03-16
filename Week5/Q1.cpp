#include<iostream>
#include<unordered_map>
using namespace std;
void maxoccur(char arr[],int n)
{
    unordered_map<char,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    char maxchar='\0';
    int maxcount=0;
    for(auto i:mpp)
    {
        if(i.second>maxcount)
        {
            maxcount=i.second;
            maxchar=i.first;
        }
    }
    cout<<"Max Count :"<<maxcount<<"Max char : "<<maxchar;
}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxoccur(arr,n);
   
}
