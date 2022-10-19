#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
     char str[20];
     int i,digit=0,length=0,CAP=0,pt=0;
     cout<<"Enter  Password : ";
     gets(str);
     try
     {

            if(strlen(str)<6)
            {
               cout<<"Not allow less than 6 character..!!"<<endl;
               throw 'c';
            }

          for(i=0;str[i];i++)
          {
         //if(str[i]>='0'&&str[i]<='9')
                //digit=1;
                if(isdigit(str[i]))
                    digit=1;
          if(isupper(str[i]))
               CAP=1;
           if(ispunct(str[i]))
                    pt=1;
          }
          if(digit!=1)
          {
               cout<<"digit must be allowed to  ( 0 - 9 ) "<<endl;
               throw 'c';
          }

               if(CAP!=1)
               {
                    cout<<"capital letter must be allowed to (A TO Z)"<<endl;
                    throw 'c';
               }
               if(pt!=1)
          {
               cout<<"special character must be allowed to (/ % $ # ! & * + - > ? < @) "<<endl;
               throw 'c';
          }
                   cout<<"Password is Valid...."<<endl;
     }
     catch(const char c)
     {
          cout<<"Password is Invalid....!!"<<endl;
     }

     return 0;
}


