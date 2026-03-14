/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter the a value"<<endl;
     cin>>n;
     for(int i=0;i<=n;i++)
     {
         if(i%2==0)
         {
             cout<<i<<" "<<"even"<<endl;
         }
         else
         {
             cout<<i<<" "<<"odd"<<endl;
         }
     }
     
    
}