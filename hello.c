#include <stdio.h>
#include <stdlib.h>

void feature1_print(const char *str)
{
	func1();
	printf("%s", str);
}

void feature2_print(const char *str)
{

}

int main(int argc, const char *argv[])
{
	printf("hello world.\n");	
	feature1_print("Hi, everyone. I am feature1 branch");
	return 0;
}
