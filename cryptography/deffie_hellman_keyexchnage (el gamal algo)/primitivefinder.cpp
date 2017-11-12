#include <math.h>
#include <stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;


int isPrimitive (int q, int a) {
	int i,z;
	double k,s;

	s=1;
	i=0;

	double *factors=(double*)malloc(sizeof(double)*q-2);

	while (s>0 && i<q-2) {
		k=pow(a,i);
		s=k-(q*floor(k/q));
		for (z=0;z<(sizeof(*factors)/sizeof(factors[0]));z++) {
			if (factors[z]==s) {
				return 0;
			}
		}
		factors[i]=s;
		i++;
	}

	if (i==q-2) {
		return 1;
	} else {
		return 0;
	}
}



void possible_primitive(int prime)
{
    for(int i=2;i<prime-2;i++)
        if(isPrimitive(prime,i))
            cout<<i<<endl;
}

