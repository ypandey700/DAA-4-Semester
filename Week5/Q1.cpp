#include<iostream>
using namespace std;
void count_sort(char arr[],int n)
{
int count[26];
for(int i=0;i<26;i++)
{
   count[i]=0;
}
for(int i=0;i<n;i++)
{
    ++count[arr[i]-'a'];
}
int feq=0;
char max_element='a';
bool duplicate=true;
for(int i=0;i<26;i++)
{
if(count[i]>feq)
{
    feq=count[i];
    max_element='a'+i;
}
else 
{
    duplicate=false;
}
}
if(duplicate==false)
{
    cout<<"no duplicate"<<endl;
}
else 
{
   cout<<"maximum element is "<<max_element<<"-" <<feq<<endl;

}

char brr[n];
for(int i=1;i<=26;i++)
{
 count[i]=count[i]+count[i-1];
}
for(int i=0;i<n;i++)
{
    brr[--count[arr[i]-'a']]=arr[i];
}
for(int i=0;i<n;i++)
{
    arr[i]=brr[i];
}
}
int main()
{
 char arr[9]={'g','d','m','k','k','l','f','t','o'};
 int n=9;
 count_sort(arr,n);
 cout<<"sorted array"<<endl;
 for(int i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 
}