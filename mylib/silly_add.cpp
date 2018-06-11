/*
gcc -c -o silly_add.o silly_add.cpp
ar rcs libmylib.a silly_add.o
*/

int silly_add(int a, int b)
{
  return a+b;
}