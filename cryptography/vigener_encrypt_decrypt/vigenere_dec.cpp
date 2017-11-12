#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;

void vignere_newkey(char*a,char *b)
{
    fstream c,d;char u,v;
     fstream e;
       e.open(a,ios::in);
    c.open(a,ios::in);
    d.open("temp.txt",ios::out);
int i=0;

    while(c>>u)
  {  if(b[i]!='\0')
    { u=(char)(u-97+b[i++]-96)%26;
    d<<(char)(u+96);
    }

   else
   {
     e>>v;
     u=(char)(u-97+v-96)%26;
    d<<(char)(u+96);   }   }
c.close();
d.close();
e.close();
remove(a);
rename("temp.txt",a);
}




void vigneredec_newkey(char*a,char *b)
{
    fstream c,d;char u;
    c.open(a,ios::in);
    d.open("temp.txt",ios::out);
int i=0;

    while(c.get(u))
  {

        if(b[i]=='\0')
       i=0;
    u=u-b[i]+1;
    b[i++]=(char)(u+96);
    d<<(char)(u+96);
   }
c.close();
d.close();

remove(a);
rename("temp.txt",a);

}


