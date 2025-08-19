#include<stdio.h>
struct student{
    int id;
    char name[50];
    int roll;
};

int main(){
struct student s1={1,"subhankar", 01};
printf("id= %d \n name = %s \n roll= %d \n",s1.id,s1.name,s1.roll);
return 0;
}