/* zippo2.c -- 通过指针获取zippo的信息*/
#include <stdio.h>

int main(void)
{
	int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};
	int(*pz)[2];
	pz=zippo;
	printf("数组的数组\n zippo是大小为4的数组 zippo[0]是大小为2的数组 pz = zippo = %p,pz+1=%p\n",pz,pz+1);
	printf("pz[0] 是大小为2的数组的起始地址=%p,pz[0]+1=%p\n",pz[0],pz[0]+1);
	printf("*pz = pz[0] = %p,*pz+1=pz[0]+1=%p\n",*pz,*pz+1);
	printf("pz[0][0]=%d\n",pz[0][0]);
	printf(" *pz[0]=%d\n",*pz[0]);
	printf(" **pz=%d\n",**pz);
	printf("    pz[2][1]=%d\n",pz[2][1]);
	printf("*(*(pz+2)+1)=%d\n",*(*(pz+2)+1));
	return 0;
}
