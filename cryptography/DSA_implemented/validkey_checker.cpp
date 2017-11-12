#include"num_th.cpp"


long int cd(long int e,long int phi)
{
long int k=1;
while(1)
{
    k=k+phi;
    if(k%e==0)
    return(k/e);
}
}


long long int valid_e(long long int i,long long int j)
{
    if(gcd(i,j)==1)
        return 1;
    return 0;
}

int possible_e(long long int prime1,long long int prime2)
{
    if(checkvalidprime(prime1,prime2))
        return -1;


    long long int phi=(prime1-1)*(prime2-1);
    for(long long int i=2;i<phi;i++)
        if(valid_e(i,phi))
            cout<<i<<endl;

    return 0;

}


int keycreator(publickey * keyPub, privatekey* keyPri ,long long int prime, long long int prime2, long long int e)
{
      if(valid_e(e,(prime-1)*(prime2-1)))
    {
        if(!checkvalidprime(prime,prime2))

        {keyPub->n=prime*prime2;
        keyPub->e=e;
        keyPri->n=keyPub->n;
        keyPri->d=cd(e,(prime-1)*(prime2-1));
        return 0;
        }
    }


    return -1;
}

/*
int main()
{
publickey *a=new publickey;
privatekey *b =new privatekey;
keycreator(a,b,23,29,25);
cout<<a->e<<"     "<<a->n;
cout<<endl<<b->d<<"     "<<b->n;
}
*/
