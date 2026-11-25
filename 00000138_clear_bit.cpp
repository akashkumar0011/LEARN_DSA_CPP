#include<iostream>
using namespace std;

   int getBit(int n, int pos)
{
   return ((n&(1<<pos))!=0);
}
   int setBit(int n,int pos)
{
   return (n|(1<<pos));
}
   int clearBit(int n,int pos)
{
   int mask=~(1<<pos);
   return(n&mask);
}
   int main()
{
   cout<<clearBit(5,2)<<endl;
   return 0;
}