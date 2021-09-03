#pragma once

void _dbgTraceIn(const char*file,const char*fn,int line);
void _dbgTraceOut(const char*file,const char*fn,int line);

void _dbgMsg(int line,const char*msg);
void _dbgFmtMsg(int line,const char*format,...);

#define dbgTraceIn(_) _dbgTraceIn(__FILE__,__func__,__LINE__)
#define dbgTraceOut(_) _dbgTraceOut(__FILE__,__func__,__LINE__)
#define dbgMsg(msg) _dbgMsg(__LINE__,msg)
#define dbgFmtMsg(fmt,...) _dbgFmtMsg(__LINE__,fmt,__VA_ARGS__)

