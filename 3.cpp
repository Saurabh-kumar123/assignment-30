#include<iostream>
using namespace std;
int main()
{
     float n1,n2,ans;
     char op;
     try
     {
        cout<<"Enter a first number : ";
        cin>>n1;
        cout<<"Enter any operator : ";
        cin>>op;
        if(op!='+'&&op!='-'&&op!='/'&&op!='*')
        throw 'e';
        cout<<"Enter a second number : ";
        cin>>n2;
        if(op=='/'&&n2==0)
        throw n2;
          switch(op)
          {
          case '+':
               ans=n1+n2;
               break;
          case'-':
               ans=n1-n2;
               break;
          case'/':
               ans=n1/n2;
               break;
          case'*':
               ans=n1*n2;
          }
          cout<<"Result is : "<<ans<<endl;
     }
     catch(float n)
     {
          cout<<"Zero is Invalid for division opration.."<<endl;
     }
     catch(char e)
     {
          cout<<"Operator is Invalid.."<<endl;
     }
     return 0;
}
