// readwrite.cpp : Defines the entry point for the console application.
//
//https://www.codingunit.com/c-tutorial-binary-file-io

#include "stdafx.h"
#include <stdio.h>

struct rec
{
	int x, y, z;
};

int main()
{
	int counter;
	FILE *ptr_myfile;
	struct rec my_record;

	ptr_myfile = fopen("test.bin", "rb");
	for (counter = 1; counter <= 10; counter++)
	{
		//my_record.x = counter;
		//fwrite(&my_record, sizeof(struct rec), 1, ptr_myfile);
		fread(&my_record, sizeof(struct rec), 1, ptr_myfile);
		printf("count: %d\n", my_record.x);
	}

	fclose(ptr_myfile);
    return 0;

}

