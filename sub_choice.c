#include<stdio.h>

main(){
  int choice, type;

    printf(" talking for  call center\n\n");
  	printf (" press 1 for gujarati...\n");
 	printf (" press 2 for telugu.....\n");
  	printf (" press 3 for english....\n");
  	printf (" press 4 for kannda.....\n");
   	printf ( "enter you choice :");

   scanf ("%d", &choice);
   switch ( choice)
   {
   case 1:  printf (" you are talking gujarati\n"); break;
   case 2:  printf (" you are talking telugu\n");   break;
   case 3:  printf (" you are talking english\n");  break;
   case 4:  printf (" you are talking kannda\n"); break;


   default: printf ( " invalied type ....................");
   }

   }
