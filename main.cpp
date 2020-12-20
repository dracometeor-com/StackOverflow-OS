#define PY_SSIZE_T_CLEAN

#include <iostream>
#include <Python.h>

using namespace std;

void help()
{
  Py_Initialize();
  PyRun_SimpleString("print 'Type sort to sort a list'\n"
                     "print 'Type printvar to print a var that has value 2'\n"
                     "print 'Type exit to exit'\n");
  Py_Finalize();
}

void sort()
{
  Py_Initialize();
  PyRun_SimpleString("import random\n"
                     "array = list(range(1, 1000000))\n"
                     "random.shuffle(array)\n"
                     "length = len(array)\n"
                     "print 'sorting array'\n"
                     "for i in range(0,length-1):\n"
                     "    for j in range(0,length-i-1):\n"
                     "        if array[j] < array[j+1]:\n"
                     "            array[j], array[j+1] = array[j+1], array[j] \n"
                     "print 'array sorted'\n"
                     );
  Py_Finalize();
}

void printvar()
{
  Py_Initialize();
  PyRun_SimpleString("import re\n"
                     "f = open(\"jquery.js\", \"r\")\n"
                     "n = f.read()\n"
                     "avar = '$(\\'#var\\').val( 2 );'\n"
                     "avar = re.findall('\\d+', avar )[0]\n"
                     "print avar\n"
                     );
  Py_Finalize();
}


int main()
{
  Py_Initialize();
  PyRun_SimpleString("from time import time,ctime\n"
                     "print 'Welcome to Stack Overflow OS - Today is',ctime(time())\n"
                     "print 'Type help for help'\n");
  Py_Finalize();
  bool isDone = false;

  while(!isDone)
  {
    string cmd;
    cin >> cmd;
    if(cmd == "help") {
      help();
    } else if(cmd == "sort") {
      sort();
    } else if(cmd == "printvar") {
      printvar();
    } else if(cmd == "exit") {
      isDone = true;
    } else {
      Py_Initialize();
      PyRun_SimpleString("print 'unknown command. type help for help'\n");
      Py_Finalize();
    }
  }


  return 0;
}