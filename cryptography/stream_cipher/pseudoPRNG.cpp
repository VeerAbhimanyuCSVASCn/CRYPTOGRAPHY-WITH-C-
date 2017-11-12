#include"cpprefencro.cpp"
#include"crefencro.c"
using namespace std;
/* LINERAR CONRUENTIAL GENERATOR */

struct t
{
    int _holdrand;
};

int stream(int j)
{
    t *ptd=new t;
    ptd->_holdrand=j;
   return( ((ptd->_holdrand = ptd->_holdrand * 214013L + 2531011L) >> 16) & 0x7fff );

}

unsigned int PRNG(int ncount)
{

    static unsigned int nSeed = stream(ncount);
  nSeed = (8253729 * nSeed + 2396403);
    return nSeed  % 32767;
}

/*
int main()
{
    for (int nCount=0; nCount < 100; ++nCount)
    {
        cout << PRNG(nCount) << "\t";
        if ((nCount+1) % 5 == 0)
            cout << endl;
    }
}
*/
