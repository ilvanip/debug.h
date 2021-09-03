#include"test.h"
#include"debug.h"

static void sub(int a,int b)
{
	dbgTraceIn();
	dbgFmtMsg("Subtracting %d and %d.",a,b);
	dbgFmtMsg("Difference is [%d].",a-b);
	dbgTraceOut();
}

void add(int a,int b)
{
	dbgTraceIn();
	dbgFmtMsg("Adding %d and %d.",a,b);
	dbgFmtMsg("Sum is [%d].",a+b);
	sub(a,b);
	dbgTraceOut();
}

