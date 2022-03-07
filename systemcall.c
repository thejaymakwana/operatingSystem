#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

struct dirent *dptr; //dirent pointer
int main(int argc, char *argv[])  //argument pass while execution
{
char buff[100];
DIR *dirp; // directory pointer
printf("Enter Directory name ->");
scanf("%s", buff);
if((dirp = opendir(buff))==NULL)
{
        printf("\nThe given directory does not exist"); 
        exit(1);
}
while(dptr = readdir(dirp))
{
        printf("%s\n",dptr->d_name);
}
closedir(dirp);
}


