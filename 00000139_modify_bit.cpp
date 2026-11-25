#include<iostream>
using namespace std;

   int modifyBit(int n,int pos,int value)
{
   int mask=~(1<<pos);
   n=n&mask;
   return (n|(value<<pos));
}
   int main()
{
   
   int n=5;
   int pos=1;
   int value=1;
   int result=modifyBit(n,pos,value);
   cout<<"modify bit : "<<result<<endl;
   return 0;
}