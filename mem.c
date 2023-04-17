#include <stdio.h>
 
int data; // Stored in uninitialized area

int main(void)
{
	static int data; // Stored in uninitialized area
	return (0); 
}
