/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n value";
    cin>>n;
    if((n%400==0)||(n%4==0)&&(n%100!=0))
    {
        cout<<"leap year";
    }
    else 
    {
        cout<<"not leap year";
    }
    
}    
    