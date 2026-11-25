#include<iostream>
#include<vector>
using namespace std;

   int main()
{
   vector<int>vec;
   vec.push_back(100);
   vec.push_back(200);
   vec.push_back(300);
   cout<<"after push_back size : "<<vec.size()<<endl;
   vec.pop_back();
{
   cout<<vec.at(1)<<endl;
}

   return 0;
}