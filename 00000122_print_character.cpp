#include<iostream>
using namespace std;

   int main()
{
   int n;
   cin>>n;
   cin.ignore();
   char arr[n+1];
   cin.getline(arr,n+1);
   int i=0;
   int curlen=0,maxlen=0;
   int st=0,maxst=0;
   while(1)
{
   if(arr[i]==' '||arr[i]=='\0')
{
   if(curlen>maxlen)
{
   maxlen=curlen;
   maxst=st;
}
   curlen=0;
   st=i+1;
}
   else
{
   curlen++;
}
   if(arr[i]=='\0')
{
   break;
}
   i++;
}
   cout<<"maximum length : " <<maxlen<<endl;
   cout<<"longest word : ";
   for(int j=0; j<maxlen; j++)
{
   cout<<arr[maxst+j];
}
   cout<<endl;
   return 0;
}