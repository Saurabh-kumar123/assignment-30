#include<iostream>
//#include<cstring>
using namespace std;
int isvalid(char *);
int main()
{
     char str[100];
     cout<<"Enter your email : ";
     gets(str);
     try
     {
          if(isvalid(str))
               cout<<"Email  ID  is  Valid...."<<endl;
          else
               throw 'e';
     }
     catch(char e)
     {
          cout<<"Email  ID  is Invalid...!!"<<endl;
     }
     return 0;
}
 int isvalid(char *str)
 {
      int i,atrate=0,dot=0,len=0;
      for(i=0;str[i];i++)
      {
           if(str[i]=='@')
               atrate=i;
           else if(str[i]=='.')
           dot=i;
           len++;
      }
      if(atrate==0||dot==0)
          return 0;
      if(atrate>dot)
          return 0;
       if(dot>=len-1)
          return 0;
          return 1;
 }
