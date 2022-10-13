#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	if (argc == 2) {
		char *str = getenv(argv[1]);
		if (str == NULL)
			printf("Not exist\n");
		else
			printf("%s\n", str);
	} else
		printf("Executed\n");
}
