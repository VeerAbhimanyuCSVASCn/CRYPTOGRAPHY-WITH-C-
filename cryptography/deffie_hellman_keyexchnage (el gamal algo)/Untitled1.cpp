#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include"C:\Users\abhimanyu\Documents\cryptography\DSA_implemented\num_th.cpp"
#include"primitivefinder.cpp"
using namespace std;


struct public_stuf
{
    long long int prime;
    long long int primitive;
};


struct private_key
{   public_stuf c;
    long long int a;
};


struct public_key
{
    long long int exchangable;
};




struct private_key *   private_entry(long long int primeno,long long int primitive, long long int randomno,public_key *k)
{
    if(prime(!primeno))
        return NULL;

    if(randomno<2 && randomno > primeno-2)
        return NULL;
    if(!isPrimitive(primeno,primitive))
        return NULL;


    struct private_key *key = new private_key;
    key->c.prime=primeno;
    key->c.primitive=primitive;
    key->a=randomno;
    k->exchangable=powermod(primitive,randomno,primeno);
    return key;
}



struct keyfound
{
    long long int  key_found;
};



struct keyfound* decrypter(struct  public_key * pub,struct private_key* pri)
{
 struct keyfound *keyfounds=new keyfound;
 keyfounds->key_found = powermod(pub->exchangable,pri->a,pri->c.prime);
    return keyfounds;
}
