#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<signal.h>
using namespace std;


typedef struct publickey
{
    long long int n;
    long long int e;
}publickey;



typedef struct privatekey
{
    long long int n;
    long long int d;
}privatekey;




 long long int prime(long long int i)
{
    for( long long int j=2;j*j<=i;j++)
    {  if(i%j==0)
            return 0;
    }
    return i;
}


int gcd(int a,int b)
{    if(b==0)
        return a;
        gcd(b,a%b);
}

 long long int power( long long int num,long long int powder)
{   if(powder==0)
        return 1;
    if(powder%2==0)
        return (power(num*num,powder/2));
    if(powder%2==1)
        return (num*power(num*num,(powder)/2));
}


long long int powermod( long long int num,long long int powder,long long int mod)
{
    if(powder==0)
        return 1;
    if(powder%2==0)
        return (powermod((num*num)%mod,powder/2,mod));
    if(powder%2==1)
        return ((num*(powermod((num*num)%mod,(powder-1)/2,mod)))%mod);
}

int checkvalidprime(long long int i,long long int j)
{    if(i==j)
     return -1;

     else if(!prime(i))
        return -1;

     else if(!prime(j))
        return -1;

     else return 0;}









/*
int main()
{int i,j;

cin>>i>>j;
    cout<<powermod(i,j,2);
}
*/
