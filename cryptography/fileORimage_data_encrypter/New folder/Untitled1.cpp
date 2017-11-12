#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    ofstream img ("picture.ppm");
    img<<"P3"<<endl;
    img<<3700<<" "<<7200<<endl;
    img<<"255"<<endl;

    for(int i=0;i<1200;i++)
        for(int j=0;j<1500
        ;j++)
    {
        img<<(i%25+j%253)<<" "<<(j%225)<<" "<<(i*j%215);
    }
    system("open picture.ppm");
    return 0;
}
