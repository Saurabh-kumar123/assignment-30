#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number : ";
     cin>>n;
     try
     {
          if(n&1)
          throw 'e';
          else
          cout<<"Number is even.."<<endl;
     }
     catch(char e)
     {
          cout<<"Number is odd.."<<endl;
     }
     return 0;
}

