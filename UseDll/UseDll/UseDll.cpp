// UseDll.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "calc.h"

//动态链接库的调用有两种方式
//隐式调用动态链接库   一
//显示调用动态链接库

int main()
{

	int result=add(3, 5);
	printf("add(3,5)=%d\n", result);

	result=sub(100, 93);
	printf("sub(100,93)=%d\n", result);

	getchar();

    return 0;
}

