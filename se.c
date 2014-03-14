#include <stdio.h>
int main(){
	FILE *fp;
	char c;
	char buffer[1024];
	printf("press anykey to continue \n");
	getchar();
	fp = fopen("abc", "r");
	if (fp == NULL){
		printf("ERROR! \n");
		return -1111;
	}
	printf("SUCEESS! \n");
	fclose(fp);
}
