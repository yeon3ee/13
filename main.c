#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
	int ID; //학번 
	char name[10]; //이름 
	double grade; //학점 
	};
	
int main(void){
	//instance 선언 
	struct student s1 = {123, "cheyeon", 4.3};

	//다른 값 변경
	s1.ID = 2310538;
	strcpy(s1.name, "cheyeon");
	s1.grade = 4.3;
	//출력 
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade); 
	
	return 0;
}



	
