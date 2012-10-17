/** demonstrates usage of the SoftPot variable potentiometer
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
	FILE *fp;
	char buf[64];
	
	//open file
	fp = fopen("/sys/devices/platform/omap/tsc/ain3", "r");
	if(fp == NULL){
		printf("error with opening analog in file\n");
		fflush(stdout);
		exit(1);
	}
	rewind(fp);
	//read value
	fgets(buf, 64, fp);
	//format for printing
	printf("The SoftPot was touched at %d%\n", 101*atoi(buf)/4095); //101 for 0-100
	//close file pointer
	fclose(fp);
	return 0;
}
