#include<iostream>
using namespace std;

   int main()
{
   int row,column;
   cout<<"enter the row number : ";
   cin>>row;
   cout<<"enter the column number : ";
   cin>>column;
   for(int i=1; i<=row; i++)
{
   for(int j=1; j<=column; j++)
{
   cout<<"*";
}
   cout<<endl;
}
}