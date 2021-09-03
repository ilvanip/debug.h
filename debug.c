#include<stdio.h>
#include<stdarg.h>

#include"debug.h"

static int indent_level=0;

static void indent()
{
	for(int i=0;i<indent_level;++i)
		printf("|___");
}

void _dbgTraceIn(const char*file,const char*fn,int line)
{
	printf("[TRACE]>[%3d]_",line);
	indent();
	printf("%s::%s():\n",file,fn);
	++indent_level;
}

void _dbgTraceOut(const char*file,const char*fn,int line)
{
	printf("[TRACE]<[%3d]_",line);
	--indent_level;
	indent();
	printf("%s::%s():\n",file,fn);
}

void _dbgMsg(int line,const char*msg)
{
	printf("[DEBUG]:[%3d]_",line);
	indent();
	printf("%s\n",msg);
}

void _dbgFmtMsg(int line,const char*format,...)
{
	printf("[DEBUG]:[%3d]_",line);
	indent();
	//Taken from the Linux man pages.
	va_list args;
	va_start(args,format);
	//https://stackoverflow.com/questions/21540778/pass-varargs-to-printf
	vprintf(format,args);
	printf("\n");
	va_end(args);
}


