#include"cpprefencro.cpp"
#include"crefencro.c"
#include"S_box.cpp"
using namespace std;
long long int q=0;
int ds(int i)
{
    return ((q>>i)&1);

}

char* des(char *a,char *b)
{

long long int p=0;
int c=7,d[8]={0,0,0,0,0,0,0,0};
int j=0;


for(int i=31;i>=0;i--)
{p=p|(((a[j]-97)>>c--)&1)<<i;
 if(c==-1){c=7;j++;}
}


for(int i=0;i<48;i++)
{q=q|(((p>>(DesExpansion[i]-1))&1))<<i;}

cout<<endl;
c=7;j=0;


for(int i=47;i>=0;i--)
{q=(q|(((q>>i)&1)^(((b[j]-97) >>c--)&1)) <<i);if(c==-1){c=7;j++;}}



for(int i=0;i<8;i++)
{  int p=   2*ds  (47-6*i)+ds(42-6*i);
    d[i]=DesSbox[i][p][ 8*ds  (46-6*i)+4*ds(45-6*i)+ 2*ds  (44-6*i)+ds(43-6*i)];
if(i%2==0)
    d[i]=(d[i]<<4);
else
    d[i-1]+=d[i];


}


for(int i=0;i<4;i++)
a[i]=d[i*2];

return a;
}
/*
int main()
{
    char a[4],b[6];

    gets(a);
  gets(b);
    cout<<des(a,b);

    return 0;
}
*/
