#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void affine(string Msg)
{
    string CTxt = "";
    int a;
    int b;

    cout<<"Enter the keys a and b : ";
    cin>>a>>b;
  
    for (int i = 0; i < Msg.length(); i++)
    {
        CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
    }
    cout<<CTxt;
}