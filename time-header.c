#include <stdio.h>
#include <time.h>
int main()
{
	struct tm* ptr;
	time_t t;
	t = time(NULL);
	ptr = localtime(&t);
	printf("%s", asctime(ptr));

	return 0;
}








// time_t start, end;
//     start = time(NULL);
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("Sum of %d and %d is %d\n",
//            a, b, a + b);
//     end = time(NULL);
//     printf("Time taken to print sum is %.f seconds",
//            difftime(end, start));