#include"cpprefencro.cpp"
#include"crefencro.c"

using namespace std;

/*simple constant encryption and decryption module
can be used  to create new files of same data(encrypted) but different names*/

int C_enc(char*a,char *b,char constant,int gap)
{   char c[2];
    fstream file,files;
    file.open(a,ios::in);
    files.open(b,ios::out);
    while(1)
    {if(!file.read((char*)&c,sizeof(c[0])))
      goto ab;
     c[0]=c[0]^constant;
     files.write((char*)&c,1);
     for(int i=1;i<gap;i++)
     {
         if(!file.read((char*)&c,sizeof(c[0])))
         goto ab;
         files.write((char*)&c,1);
     }
    }
    ab:
file.close();
files.close();
}


/*encryption and decryption module - survives encrypted data file only*/

C1f_enc(char*a,char constant='B',int gap=1)
{
    C_enc(a,"temptative12.txt",constant,gap);
    remove(a);
    rename ("temptative12.txt",a);}



SafeC_enc(char*a,char costant,int gap)
{
    C1f_enc(a,costant,gap);
    fstream k;
    k.open(a,ios::out|ios::app);
   k<<"<<<"<<costant<<" "<<gap <<">>>";
}


