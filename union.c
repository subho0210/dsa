#include<stdio.h>
#include<string.h>
union student{
    int id;
    char name[50];
    int roll;
};

int main(){
union student s1;
s1.id=1;
printf("id= %d \n ",s1.id);
strcpy(s1.name, "subhankar");
printf("name = %s \n ",s1.name);
s1.roll=01;
printf("roll= %d\n ",s1.roll);
return 0;
}