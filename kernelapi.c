#include <stdio.h>
#include <dirent.h>
 
int main(void)
{
   struct dirent *de; // Pointer for directory entry
 
   char buff[100];
   printf("\t20\t Jay Makwana\n");
   printf("Enter Directory Name: ");
   scanf("%s", buff);
   // opendir() returns a pointer of DIR type.
   DIR *dr = opendir(buff);
 
   if (dr == NULL) // opendir returns NULL if couldn't open directory
   {
       printf("Could not open current directory" );
       return 0;
   }
        // for readdir()
   while ((de = readdir(dr)) != NULL)
           printf("%s\n", de->d_name);
 
   closedir(dr);  
   return 0;
}

