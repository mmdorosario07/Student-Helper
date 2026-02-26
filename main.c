#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int main() {
	unsigned short int exit_var;//get exit signal
	printf("Student-Helper\n");
	while (1){
		printf("Press 0 to exit...\n");
		scanf("%d", &exit_var);
		if (exit_var == 0) {
			printf("exit...\n");
			exit(0);
		} else {
			printf("Please end this task!\n");
		}
	}

	return 0;
}
