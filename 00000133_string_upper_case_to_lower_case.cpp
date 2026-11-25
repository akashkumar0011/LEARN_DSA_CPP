#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

   int main()
{
   string s="AKASH KUMAR";
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout<<s<<endl;
   return 0;
}