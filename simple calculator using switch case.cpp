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
    int a,b;
    
    
    cout<<"enter  a and b value";
    cin>>a>>b;
    int result;
    int n;
    cout<<"enter the n value";
    cin>>n;
    
    switch(n)
    {
        case 1:
        result=a+b;
        cout<<result;
        break;
        case 2:
        result=a-b;
        cout<<result;
        break;
        case 3:
        result=a*b;
        cout<<result;
        break;
        case 4:
        result=a/b;
        cout<<result;
        break;
        case 5:
        result=a%b;
        cout<<result;
        break;
        default:
        cout<<"invalid";
        
        
    }
}
    
    