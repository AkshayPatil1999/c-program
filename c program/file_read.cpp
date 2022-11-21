#include<stdio.h>
main()
{
	 
	 FILE *fp;
	 char ch;
	 fp = fopen("marks.cpp","r");
	 
	 if (fp == NULL)
	 
	 {
	 	 printf(" File does not exist \n");
	 }
	 while(1)
	 {
	 	 ch = fgetc(fp);
	 	 
	 	 if (ch == EOF)
	 	 
	 	 break;
		  printf("%c",ch);
	  } 
	  fclose(fp);
}
