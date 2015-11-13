#pragma once

// Define to simulate bool 
#define TRUE 1
#define FALSE 0


// Definition of the fileContent Structure

typedef struct FileContent FileContent;
struct FileContent
{
	char** elem;
	unsigned int nbLine;
};

// Function's prototype

FileContent* pushFileToStruct(char *filePath);
int getLineNumber(FILE* file);
char* getLine(FILE* file);
void freeStruct(FileContent* structToFree);
void structDisplay(FileContent* structToDisplay, int displayLine);
int realloc_s(char **line, char* toCpy, int nbELem);
void initBuffer(char *buffer, int size);
