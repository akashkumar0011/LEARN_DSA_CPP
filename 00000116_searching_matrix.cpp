#include<iostream>
using namespace std;

   int main()
{
   int n;
   cout<<"enter the size of array : "<<endl;
   cin>>n;
   int arr[100];
   cout<<"enter "<<n<<" elements : "<<endl;
{
   for(int i=0; i<n; i++)
{
   cin>>arr[i];
}
   int target;
   cout<<endl<<"enter the element to search : "<<endl;
   cin>>target;
   bool found=false;
   int index=-1;
   for(int i=0; i<n; i++)
{
   if(arr[i]==target)
{
   found=true;
   index=i;
   break;
}
}
   cout<<endl;
   if(found)
{
   cout<<"element found at index "<<index<<endl;
}
   else
{
   cout<<"element not found in the array "<<endl;
}
   return 0;
}
}