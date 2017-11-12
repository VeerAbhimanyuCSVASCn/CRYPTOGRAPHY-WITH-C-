#include"cpprefencro.cpp"
#include"crefencro.c"
#include"pseudoPRNG.cpp"


using namespace std;
/* LINERAR CONGRUENTIAL GENERATOR */

char* LCG(char* name,int n)
{   int p=0;
    long long int i=0;
    for(;name[i]!='\0';i++)
    {
        p=PRNG(n)%256;
        name[i]=(p)^name[i];
//    cout<<(char)name[i];
    }
    return name;
}


int main()
{
    int n;
    cin>>n;
    fflush(stdin);
    char  name[100];
    gets(name);
    LCG(name,n);
puts(name);
}
