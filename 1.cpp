#include<iostream>
using namespace std;
void chek(int n)
{
     int num;
  try
  {
       if(n>=0&&n<=9)
       {
          throw num;
       }
          else

                   cout<<"Number is not a single : "<<endl;
               throw 'c';

  }
  catch(int n)
  {
       cout<<"Number is single : "<<endl;
  }
  catch(...)
  {
     cout<<"Other Execption"<<endl;
  }
}
int main()
{
     int n;
     cout<<"Enter a number :  ";
     cin>>n;
     chek(n);
     return 0;
}
