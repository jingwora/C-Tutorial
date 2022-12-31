/*
C-Tutorail in visual studio
Structures
struct, strcpy, typedef, enum, union
*/

#include <stdio.h>

void printStructure(struct Student p);
void function1();
void function2();
void function3();

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
	//function1();
	//function2();
	function3();

	return 0;
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


// function2
// enum
void function2()
{
	enum Level {
		LOW = 1,
		MEDIUM,
		HIGH
	};

	enum Level myVar = MEDIUM;

	printf("%d : ", myVar);

	switch (myVar) {
	case 1:
		printf("Low Level");
		break;
	case 2:
		printf("Medium level");
		break;
	case 3:
		printf("High level");
		break;
	}
}


// function3
// union
void function3()
{
	// Define the union
	union Data {
		int i;
		float f;
		char str[20];
	};

	// Declare a variable of the Data union type
	union Data data;

	// Set the integer field of the union
	data.i = 10;
	printf("Integer: %d\n", data.i);

	// Set the float field of the union
	data.f = 3.14;
	printf("Float: %f\n", data.f);

	// Set the string field of the union
	strcpy_s(data.str, sizeof(data.str), "Hello");
	printf("String: %s\n", data.str);

}