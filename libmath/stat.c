#include"libmath.h"
int meaan(int *pArr, int size){
	int sum=0;
	for(int i=0;i<size; i++)
	sum=add(pArr[i],sum);
return sum/size;
}
