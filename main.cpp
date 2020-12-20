#define PY_SSIZE_T_CLEAN
#include <Python.h>

int main()
{
  Py_Initialize();
  PyRun_SimpleString("from time import time,ctime\n"
                     "print 'Welcome to Stack Overflow OS - Today is',ctime(time())\n"
                     "print 'Type help for help'\n");
  Py_Finalize();
  return 0;
}