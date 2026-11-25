#include<iostream>
using namespace std;

   int main()
{
   int rows,cols;
   cout<<"enter the number of rows : ";
   cin>>rows;
   cout<<"enter the number of columns : ";
   cin>>cols;
   int arr[100][100];
   cout<<"enter "<<rows*cols<<" elements : "<<endl;
   for(int i=0; i<rows; i++)
{
   for(int j=0; j<cols; j++)
{
   cin>>arr[i][j];
}
}
   cout<<endl<<"your 2d array matrix is : " <<endl;
   for(int i=0; i<rows; i++)
{
   for(int j=0; j<cols; j++)
{
   cout<<arr[i][j]<<" ";
}
   cout<<endl;
}
   return 0;
}