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
    cin>>n;
    int a,b;
    cin>>a>>b;
    int c;
    cout<<"fibonnocci series:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}