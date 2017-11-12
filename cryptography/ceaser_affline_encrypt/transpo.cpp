#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;


char * caeser_cipher(char *a,int k)
{
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=(char)((((a[i]-97)+k+26)%26)+97);
     cout<<(a[i])<<endl;
    }
    return a;
}


char* anti_caeser_cipher(char*a ,int k)
{
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=(char)((((a[i]-97)-k+26)%26)+97);
        cout<<(a[i])<<endl;
    }
    return a;
}


char* affine_cipher(char*a ,int l,int k)
{cout<<endl;
    for(int i=0;a[i]!='\0';i++)
    {

        a[i]=(char)((((l*(a[i]-97))+k+26)%26)+97);
cout<<a[i];
    }

    return a;

}


char* anti_affine_cipher(char *a,int l,int k)

  {
      for(int i=0;a[i]!='\0';i++)
    {

        a[i]=(char)(((((a[i]-97))-k)/l+26)%26+97);
cout<<a[i];
    }
    affine_cipher(a,l,k);
    return a;

}


