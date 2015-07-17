#include <stdio.h>
#include "zhtao.h"
#include "yurui.h"
#include "luoyong.h"
int main(int argc, char *argv[])
{
	printf("git study\n");
	
	/*假设每个函数接口是一个功能模块调用的接口
	请实现自己的功能，不能在main.c这一个源文件实现，自己添加源文件
	随意你写什么*/
	//int git_luoyong();
	git_luoyong();
	//int git_zhangtao();
	git_zhangtao();
	//int git_yurui();
	git_yurui();
	int git_zhonghao();
	return 0;
}
