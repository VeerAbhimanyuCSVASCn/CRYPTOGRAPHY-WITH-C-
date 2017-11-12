#include"validkey_checker.cpp"
#include<string.h>

int* encrypt(char*a,publickey * key)
{   int*t;
    t=(int*)malloc(sizeof(int)*strlen(a));

    for(int i=0;i<=strlen(a);i++)
      {t[i]=(powermod(a[i],key->e,key->n));
        a[i]=(powermod(a[i],key->e,key->n));
      }
      return t;

}



char *decrypt(int*a,privatekey * key)
{
    char*t=NULL;
    t=(char*)malloc(sizeof(char)*1);

    int i=0;
       do
      { t=(char*)realloc((char*)t,i+1);
          t[i]=(char)(powermod(a[i],key->d,key->n));

      }while((char)(powermod(a[i++],key->d,key->n))!='\0');

      cout<<t;
      return t;

}


/*int main()
{
    char as[100];
    cin>>as;

    publickey *a=new publickey;
    privatekey *b =new privatekey;
    keycreator(a,b,23,29,25);
    int *t=encrypt(as,a);

     decrypt(t,b);
}
*/
