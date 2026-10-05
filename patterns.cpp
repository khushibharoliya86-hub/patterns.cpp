#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,n=5;
    char ch;

    //1-numeric pattern//

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }



    cout<<endl;
//2-lowercase alphabet pattern//

    for(i=1; i<=n; i++)
    {
        char ch='a';
        for(j=1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }



    cout<<endl;
//3-uppercase alphabet pattern//
    for(i=1; i<=n; i++)
    {
        char ch='A';
        for(j=1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }



    cout<<endl;
//4-right half number triangle//
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }




    cout<<endl;
//5-full number pyramid//
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*(n-i); j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        for(j=(i-1); j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }



    cout<<endl;
//6-full alphabet pyramid//
    for(i=1; i<=n; i++)
    {
        char ch='A';
        for(j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        ch=(ch-2);
        for(j=(i-1); j>=1; j--)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;
}
