#include <stdio.h>
typedef struct{
	int 		id;
	char 		name[30];
	float 		grade;
} student;

int main(){
	student sv1;	
	sv1.id = 1;
	strcpy(sv1.name, "Vu Van Huy");  //	name="Vu Van Huy";
	sv1.grade = 8.5;
	printf("Student info: Id = %d, name = %s, grade = %.2f", sv1.id, sv1.name, sv1.grade);
	
	student sv2 = {2, "Nguyen Van Ba", 7.8};	//Declare and init
	printf("\nStudent info: Id = %d, name = %s, grade = %.2f", sv2.id, sv2.name, sv2.grade);
	return 0;
}
