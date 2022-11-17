#include <stdio.h>
int main()
{
int coursework, examination, total;
char grade;

printf("Enter coursework mark: ");
scanf("%d", &coursework);

printf("Enter examination mark: ");
scanf("%d", &examination);

total = coursework + examination;

if(total >= 40)
{
if(coursework >= 15 && examination >= 15)
{
if(total >= 70)
grade = 'A';

else if(total >= 60)
grade = 'B';

else if(total >= 50)
grade = 'C';

else if(total >= 40)
grade = 'D';

else
grade = 'F';
}

else
{
total = 39;
grade = 'F';
}
}

else
{
total = 39;
grade = 'F';
}

printf("Total mark: %d\n", total);
printf("Grade: %c\n", grade);

return 0;
}
