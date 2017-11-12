#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;

void vignere(char*a,char *b)
{
    fstream c,d;char u;
    c.open(a,ios::in);
    d.open("temp.txt",ios::out);
int i=0;

    while(c.get(u))
  {
      if(b[i]=='\0')
       i=0;
    u=(char)(u-97+b[i++]-96)%26;
    d<<(char)(u+96);
   }
c.close();
d.close();

remove(a);
rename("temp.txt",a);

}



void vignere_dec(char*a,char *b)
{
    fstream c,d;char u;
    c.open(a,ios::in);
    d.open("temp.txt",ios::out);
int i=0;

    while(c.get(u))
  {
      if(u=='X')
        {
            d<<"\n";
        }

        if(b[i]=='\0')
       i=0;
    u=u-b[i++]+1;
    d<<(char)(u+96);
   }
c.close();
d.close();

remove(a);
rename("temp.txt",a);

}

