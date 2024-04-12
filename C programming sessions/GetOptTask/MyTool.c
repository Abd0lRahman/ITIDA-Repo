#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void CopyContentOfInputFileToOutPutFileInASCII(FILE *PtrToInputFile, FILE *PtrToOutputFile);

//Argc counter Argv array of strings that entered to the terminal

int main(int argc, char *argv[])
{
    int Opt ; 
    if(argc==1)
        printf("Missing the input flag '-A'\n");
    else if(argc==3)
        printf("Missing the output flag '-M'\n");

    FILE * PtrToInputFile = NULL;
    FILE * PtrToOutputFile = NULL;

    while((Opt = getopt(argc,argv,"A:M:")) != -1) // colon ':' means that there is argument here that is equal to optarg 'the global var in opt lib'.
    {
        switch(Opt)
        {  
            case 'A':
                PtrToInputFile = fopen(optarg,"r");
                break;
            case 'M':
                PtrToOutputFile = fopen(optarg,"w");
                break;
            default:
                printf("ERROR in flags\n");
                break;
        }
    }
    CopyContentOfInputFileToOutPutFileInASCII(PtrToInputFile, PtrToOutputFile);
    return 0;
}




void CopyContentOfInputFileToOutPutFileInASCII(FILE *PtrToInputFile, FILE *PtrToOutputFile)
{
    int CharInInputFile;
    /*Opening the files and checking if there is a problem*/
    if(PtrToInputFile == NULL)
    {
        printf("ERROR in opening the input file");
    }
    else
    {
        if(PtrToOutputFile == NULL)
        {
            printf("ERROR in opening the Output file");
        }
        else
        {
            /*Code to convert the string in input.txt to ascii in output.txt*/
            while(1)
            {
                CharInInputFile = fgetc(PtrToInputFile);
                if(CharInInputFile == EOF) // EOF is the END of file
                    break;
                else
                    fprintf(PtrToOutputFile,"%d ", (int)CharInInputFile);
            }
            printf("DDDOOONNNNEEE\n");
            /*Closing files*/
            fclose(PtrToInputFile);
            fclose(PtrToOutputFile);
        }  
    }
}