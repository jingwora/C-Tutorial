/*
C-Tutorail in visual studio
Structures
struct, strcpy
*/

#include <stdio.h>

void printStructure(struct Student p);
void function1();

// structures
struct Student {
	char name[30]; // String
	char class;    // Character
	int age;       // Integer
};

// nested structures
struct School {
	char name[10];
	struct Location {
		char city[15];
		char country[15];
	} location;
};


// typedef define new type name
typedef struct {
	char brand[15];
	char model[15];
	int year;
} Car;


int main()
{
	function1();
}

// function1
// struct
void function1()
{

	// Student 1
	struct Student s1; 
	strcpy(s1.name, "Kento Yamazaki");
	s1.class = 'A';
	s1.age = 20;
	printStructure(s1);

	// Student 2
	struct Student s2 = { "Takuya Kimura", 'B', 18 };
	printStructure(s2);

	// Student 3 copy and modify
	struct Student s3;
	s3 = s2; // Copy
	strcpy(s3.name, "Hiroshi Abe");  // Modify
	printStructure(s3);

}


void printStructure(struct Student s) 
{
	printf("Name: %s\n", s.name); 
	printf("Classe: %c\n", s.class); 
	printf("Age: %d\n", s.age); 
	puts("");
};