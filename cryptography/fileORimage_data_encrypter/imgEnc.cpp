#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;
/*encrypts - decrypts multimedia from start of media.beg*/
int imgEnc(char*a,char*b)
{   fstream c,d,e;
    char a1[2],b1;
    e.open("1.txt",ios::out|ios::app);
    c.open(a,ios::in);
    d.open(b,ios::in);

     while(c.read((char*)&a1,sizeof(a1)))
     {
         d>>b1;
         a1[0]=a1[0]^b1;
         e.write((char*)&a1,2);
     }
e.close();
c.close();
d.close();
remove(a);
rename("1.txt",a);

return 0;
}

int main()
{
    char a[100];
    gets(a);
      char b[100];
    gets(b);
    imgEnc(a,b);
    return 0;
}
