#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "register.h"

int selectMenu(){
int menu;
printf("\n*** ��ΰ��� ***\n");
printf("1. ��ȸ\n");
printf("2. �߰�\n");
printf("3. ����\n");
printf("4. ����\n");
printf("0. ����\n\n");
printf("=> ���ϴ� �޴���? ");
scanf("%d", &menu);
return menu;
}

int writeStudent(Student *s){
 printf("�̸��� ? ");
 scanf("%[^\n]", s->name);
 getchar();
 printf("���̴� ? ");
 scanf("%d", &s->age);
 printf("������ ? ");
 scanf("%[^\n]", s->major);
 getchar();
 printf("�޴��� ��ȣ�� ? ");
 scanf("%d", &s->phoneNumber);
 printf("=> �߰���!\n");
 return 1;
}
 
void readStudent(Student s){
 printf("%5s %5d %15s %4d-%4d-%4d",
   s.name, s.age, s.major, s.phoneNumber[0],s.phoneNumber[1],s.phoneNumber[2]);
}

void listStudent(Student *s, int count){
 int i = 0;
 printf("\nNo Name  age           Major    Phone Number \n");
 printf("============================================\n");
 for(i= 0; i < count; i++){
   if(s[i].age == -1) continue;
   printf("%2d ", i+1);
   readProduct(s[i]);
 }
}

int updateStudent(Student *s){
 getchar();
 printf("�̸��� ? ");
 scanf("%[^\n]", s->name);
 getchar();
 printf("���̴� ? ");
 scanf("%d", &s->age);
 printf("������ ? ");
 scanf("%[^\n]", s->major);
 getchar();
 printf("�޴��� ��ȣ�� ? ");
 scanf("%d", &s->phoneNumber);
 printf("=> �����Ϸ�!\n");
return 1;
}

int deleteStudent(Student *s){
s->age = -1;
printf("=> ������!\n");
return 1;
}