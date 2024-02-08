#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int newfile(FILE *fp)
{
  char fname[20];int sorted[10000];
  printf("\nEnter the name of the file...  ");
  scanf("%19s",fname);//File name cannot have spaces
  strcat(fname, ".txt");
  fp=fopen(fname, "w");
  int i, N = 100000, newfile[N];
  for(i=0;i<N;i++)
  {
     newfile[i]= ((rand() % 50)+1);
     fprintf(fp,"%d\n",newfile[i]);
  }
  
  
}

int main() 
{
  int i = 0;
  FILE *fp;
  do
  {
    newfile(fp);
    i++;
  }
  while (i<1);
    FILE* fpointer;
    char filename[20];
    int value = 0, result = 0, num[5] = { 0 };
    float sum, mean;

    printf("\nEnter the name of the file...  ");
    scanf("%19s",filename);
    fpointer = fopen(filename, "r");

    if (fpointer == NULL) {
        printf("ERROR: CANNOT OPEN FILE!\n");
        return -1;
    }

    result = fscanf(fpointer, "%d", &value);
  
    fclose(fpointer);
    return 0;
}