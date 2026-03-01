#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

void clean_buffer() {
	int c;
	while ( (c = getchar()) != '\n' && c != EOF ) { }
}

void exit_func(){
	int exit_;
	printf("Press 0 to exit");
	scanf("%d", &exit_);
	if (exit_ == 0) {
		printf("Closing program..\n");
		exit(0);
	} else {
		printf("Returning to main program\n");
	}
}

void wait(){
	clean_buffer();
	getchar();
}


void login(){
	char option;
	printf("[ 1 ] Login\n");
	printf("[ 2 ] Create Account\n");
	printf("[ 3 ] exit\n");
	do{
		printf("\nSelect one action ");
		scanf("%c", &option);
		//clean_buffer();
	} while (option != '1' && option != '2' && option != '3');

	if (option == '1') {
		printf("Login\n");
		wait();
	} else if (option == '2') {
		printf("Create account\n");
		wait();
	} else {
		exit_func();
	}
}

int main() {
	printf("Student-Helper\n");
	while (1){
		//Main Program Scope
		system("clear");
		printf("*------------------------------------------------*\n");
		printf("|                                                |\n");
		printf("|                Student-Helper                  |\n");
		printf("|                                                |\n");
		printf("*------------------------------------------------*\n");

		login();
	}

	return 0;
}
