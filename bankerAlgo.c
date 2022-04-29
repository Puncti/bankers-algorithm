// Nicholas Whitman
// Banker's Algorithm for deadlock avoidance

#include <stdlib.h>

int main()
{
 FILE *filePointer; // declare file pointer

 int row, column, index, process, resources;
 int  ap0[], ap1[], ap2[], ap3[], ap4[];
 int  mp0[], mp1[], mp2[], mp3[], mp4[];
 int  ava[];
 process = 5; // p0, p1, p2, p3, p4
 resources = 3; // A, B, C
 
 //read data file 
 filePointer = fopen("data.txt", "r");

 //check if data file is avaiable 
 if (filePointer == NULL)
 {
  printf("File does not exist.\n");
 }
 else
 {
  printf("File is open.\n");
  while (!feof (filePointer))   //looping through the data file
  {
   fscanf (filePointer, "%i", &i); //I cant figure out how to store the integers in the file into multiple integer array variables 
  } 

 }
 fclose(filePointer);

 // matrix of allocation
 int allocation [5][3] = { ap0,
		           ap1,
                           ap2,
                           ap3,
                           ap4 };
 // matrix of max
 int max[5][3] = 	 { mp0,
		   	   mp1,
		   	   mp2,
 		   	   mp3,
  		   	   mp4 };

 // matrix of available
 int available[3] = {ava};

 int a[process], 

 return 0;
}
