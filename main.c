#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
	int ID; //�й� 
	char name[10]; //�̸� 
	double grade; //���� 
	};
	
int main(void){
	//instance ���� 
	struct student s1 = {123, "cheyeon", 4.3};

	//�ٸ� �� ����
	s1.ID = 2310538;
	strcpy(s1.name, "cheyeon");
	s1.grade = 4.3;
	//��� 
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade); 
	
	return 0;
}



	
