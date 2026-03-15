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
    
    int n,fact=1;
    int i=1;
    cout<<"enter the n value"<<endl;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
        
    }
    cout<<"fact:"<<fact;
}