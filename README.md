# A two file implementation of simple debugging in C using just 4 macros.
### The functions provied allow you to print formatted and unformatted debugging messages alongwith their line numbers.
### The file name and function name can also be printed.
### All output to *stdin* is pretty printed and indented for easy analysis.

# Using these files:
- ### Add 'debug.h' and 'debug.c' to wherever you will use it.
- ### Include "debug.h" in the .c file you are going to use it in.

# Using these macros:

- ### Printing function stacktraces:
```C
//Log the entry and exit of a function, along with the file name and line number.
//Call 'dbgTraceIn()' at the start of the function and 'dbgTraceOut()' at the end of the function.
void function()
{
    dbgTraceIn();
    //Do something here.
    dbgTraceOut();
}
```

- ### Printing raw debug messages:
```C
//Call 'dbgMsg()' and pass in the message as a string.
//Newlines are added automatically at the end of the string, so there is no need to do it yourself.
void function()
{
    dbgTraceIn();
    dbgMsg("Inside function 'function'");
    dbgTraceOut();
}
```

- ### Printing formatted debug messages:
```C
//Call 'dbgFmtMsg()'.
//The first argument is the format string. Formatting rules of 'printf()' apply.
//The next arguments are the variables that have to be printed in the specific format.
//Newlines are added automatically at the end, so there is no need to do it yourself.
//Call this macro just like you would call 'printf()'.
void function()
{
    dbgTraceIn();
    dbgMsg("Inside function 'function'");
    int a=10,b=12;
    dbgFmtMsg("[%d] + [%d] = [%d]",a,b,a+b);
    dbgTraceOut();
}
```

