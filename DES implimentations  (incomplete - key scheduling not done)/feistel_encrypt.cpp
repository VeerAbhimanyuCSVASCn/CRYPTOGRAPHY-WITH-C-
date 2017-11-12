#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;
#define feistel_fundamental_cell_encrypt DES_base


char* feistel_fundamental_cell_encrypt(char *a, char*b)
{   char *c;
    c=(char*)malloc(9);
int i;
    static int j=0;
    if(j++==15)
        return a;

    for(int i=0;i<4;i++)
    {
        c[i+4]=(char)(a[i]^b[i]);
    }
    for(i=4;i<8;i++)
    {
        c[i-4]=a[i];

    }
    c[i]='\0';


for(i=0;i<8;i++)
    cout<<(char)c[i];

    cout<<endl;
     gets(b);
    c=DES_base(c,b);
    return c;
}

/*
int main()
{
    char key[5];
    char word[9];
    gets(key);
    gets(word);
    DES_base(word,key);
    return 0;
}
*/
