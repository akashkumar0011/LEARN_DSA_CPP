#include<iostream>
using namespace std;

   int getNthFibonacci(int n)
{
   if(n<=0) return 0;
   if(n==1) return 1;
   int a=0,b=1,c=0;
   for(int i=2; i<=n; i++)
{
   c=a+b;
   a=b;
   b=c;
}
   return b;
}
   int main()
{
   int n;
   cout<<"Enter the value of n : ";
   cin>>n;
   cout<<"The "<<n<<"th Fibonacci number is : " <<getNthFibonacci(n)<<endl;
   return 0;
}