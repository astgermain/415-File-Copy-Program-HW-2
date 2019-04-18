#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//You may also add more include directives as well.

// THIS VALUE CANNOT BE CHANGED.
// You should use this value when creating your buffer.
// And also to limit the amount of bytes each read CAN do.
#define BUFF_MAX 21
// ABOVE VALUE CANNOT BE CHANGED //



int
main(int argc, char const *argv[])
{
	int inputFile, outputFile = 0;
	char inputFileName[] = "";
	char outputFileName[] = "";
	char buffer[BUFF_MAX] = {0};
	printf("Welcome to the File Copy Program by Andrew St Germain!\r\n");
	printf("Enter the name of the file to copy from:\r\n");
	//open info in man 2 open, access modes as well.
	scanf("%s", inputFileName);
    	inputFile = open(inputFileName, O_RDONLY);
	//printf("%i\r\n", inputFile);
	//printf("%s", inputFileName);
	//Error check for correct file read
	if(inputFile < 0) {
		printf("File cannot be opened or is empty\r\n");
		return -12;
	}
	//printf("works");
	printf("Enter the name of the file to copy to:\r\n");
	scanf("%s", outputFileName);
	//O_RDWR = read/write
	//O_CREAT, addition creation flag, if file does not exists, it creates it
	//IMPORTANT, need to include 3rd argument for file permissions
	outputFile = open(outputFileName, O_RDWR|O_CREAT, 0666);
	//not sure error case will ever be reached
	if(outputFile < 0) {
		printf("File error");
		return -13;
	}
	//Page 64 of Textbook
	ssize_t input_size = read(inputFile, buffer, BUFF_MAX);
	ssize_t output_size = write(outputFile, buffer, input_size);
	printf("File Copy Successful, %zd bytes copied\r\n", output_size);
	close(inputFile);
	close(outputFile);
	return 0;
}
