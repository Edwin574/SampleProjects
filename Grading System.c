#include <stdio.h>

int main()
{
  printf("\n JKUAT STUDENTS' GRADING SYSTEM \n");
  float registrationnumber;
  char name;
  printf("Enter registration number: \n");
  scanf("%f", &registrationnumber);
  printf("Enter Name: \n");
  scanf("%c", &name);   
   float introtoprog,system,introtoacc,sweng,DB; 
    float total, average;
    char grade;
   
    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &introtoprog,&system,&introtoacc,&sweng,&DB);

    /* Calculate total, average and percentage */
    total = introtoprog+system+introtoacc+sweng+DB;  ;
    average = total / 5.0;
  

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    
    if(average>=70 && average<=100)
    grade ='A';
   else if(average>=60)
    grade ='B';
   else if(average>=50)
    grade ='C';
    else if(average>=40)
    grade='D';
    else if(average>=0 && average<=40)
    grade ='E';
    printf("Grade: %c\n", grade);
    return 0;
}
/*Edwin codes-Grades management project*/