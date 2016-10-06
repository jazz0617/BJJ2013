#include <stdio.h>
#include "foo1.c"
#include "foo2.c"



int main()
{
#ifdef DUBUG
	printf("[DEBUG] Hello bug!");
	printf("Hello..!\n");
	printf("[DEBUG] Bye bug..");
	foo1();
	printf("[DEBUG] sayonara bug..");
	foo2();
	return 0;
}
