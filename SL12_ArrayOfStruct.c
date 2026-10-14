#include <stdio.h>
typedef struct{
	int		id;
	char	name[30];
	float	grade;
} Student;

void inputData(Student std[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Input id student %d = ", i+1); scanf("%d", &std[i].id);
		getchar();
		printf("Input name student %d = ", i+1); scanf("%[^\n]", &std[i].name);
		printf("Input grade student %d = ", i+1); scanf("%f", &std[i].grade);
	}
}

void displayData(Student std[], int n){
	int i;
	printf("%-5s %-25s %5s\n", "ID", "NAME", "GRADE");
	printf("%-5s %-25s %5s\n", "--", "----", "-----");
	for (i=0; i<n; i++){
		printf("%-5d %-25s %5.2f\n", std[i].id, std[i].name, std[i].grade);
	}
	printf("\n");
}

//Sort the list by grade in descending order
void sortGradeDesc(Student std[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (std[j-1].grade < std[j].grade){
				Student tmp = std[j];
				std[j] = std[j-1];
				std[j-1] = tmp;
			}
}
int main(){
	int n;
	printf("Input number of student: "); scanf("%d", &n);
	Student std[n];
	inputData(std, n);
	displayData(std, n);
	printf("---Sorting---\n");
	sortGradeDesc(std, n);
	displayData(std, n);
	return 0;
}
