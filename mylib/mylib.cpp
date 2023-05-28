#include "mylib.h"
#include <cstdio>

IMPLEMENT_SINGLETON(Mylib)

void Mylib::hello() {
	printf("hello from mylib!\n");
}