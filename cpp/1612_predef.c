/**
 * #if #elif指令
 * 新的编译器提供新的方法测试名称是否已定义，#if defined(VAX) 代替 #ifdef VAX
 * defined 是一个预处理器运算符，如果他的参数是用#define 定义过，则返回1,否则返回0
 * 有点是可以和#elif 一起使用
 *
 * #if SYS==1
 * #include "ibm.h"
 * #endif
 *
 * #if SYS==1
 * #include "ibmpc.h"
 * #elif SYS==2
 * #include "vax.h"
 * #elif SYS==3
 * #include "mac.h"
 * #else
 * #include "general.h"
 * #endif
 *
 * defined 改写
 *
 * #if defined (IBMPC)
 * #include "ibm.h"
 * #elif defined (VAX)
 * #include "vax.h"
 * #elif defined (MAC)
 * #include "mac.h"
 * #else
 * #include "general.h"
 * #endif
 *
 * predef.c
 * C标准规定了一些预定义宏
 *
 */

#include <stdio.h>
void why_me();
int main(void)
{
	printf("The file is %s.\n",__FILE__);
	printf("The date is %s.\n",__DATE__);
	printf("The time is %s.\n",__TIME__);
	printf("The version is %ld.\n",__STDC_VERSION__);
	printf("This is line %d.\n",__LINE__);
	printf("This function is %s.\n",__func__);
	why_me();
	return 0;
}
void why_me()
{
	printf("This function is %s.\n",__func__);
	printf("This is line %d.\n",__LINE__);
}
	
