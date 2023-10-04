#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

struct Student {
	int id;
	char name[30];
	char gender[5];
	int age;
	float math;
	float physic;
	float chemiscal;
	float avarage;
	char studyResult[10];
};
typedef struct Student Student;

void printLine(int n);
void pressAnyKey();


int main() {
	int choice;
	char fileName[] = "sinhvien.txt";
	Student arrayStudent[MAX];
	int numberOfStudent = 0;
	int idCount = 0;

	// Nhap danh sách sinh viên tu file
	numberOfStudent = readFile(arrayStudent, fileName);
	idCount = idMax(arrayStudent, numberOfStudent);

	while(true) {
		printf("\nStudent Management\n");
		printf("Menu\n");
		printf("1. Add a new student.\n");
		printf("2. Update a student by Student ID.\n");
		printf("3. Remove a student by Student ID.\n");
		printf("4. Search a student by Student ID.\n");
		printf("5. Sort student list by GPA.\n");
		printf("6. Sort student list by name.\n");
		printf("7. Show student list.\n");
		printf("8. Write student list to file txt.\n");
		printf("0. Exit.\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		printf("\n");

		switch(choice) {
			case 1:
				printf("\nAdd a new student");
				idCount++;
				addStudent(arrayStudent, idCount, numberOfStudent);
				printf("\nAdd a new student success!");
				numberOfStudent++;
				pressAnyKey();
				break;
			case 2:
				printf("\n");
				break;
			case 3:
				printf("\n");
				break;
			case 4:
				printf("\n");
				break;
			case 5:
				printf("\n");
				break;
			case 6:
				printf("\n");
				break;
			case 7:
				printf("\n");
				break;
			case 8:
				printf("\n");
				break;
			case 0:
				printf("You have exited the program.");
				printf("\n");
				getchar();
				return 0;
			default:
				printf("Don't have this function, please choose again!");
				printf("\n");
				getchar();
				break;
		}
	}
}

void inputStudent(Student *st, int id) {
	printf("\n Nhap ten: ");
	fflush(stdin);
	gets(sv->ten);
	printf(" Nhap gioi tinh: ");
	gets(sv->gioiTinh);
	printf(" Nhap tuoi: ");
	scanf("%d", &(sv->tuoi));
	printf(" Nhap diem Toan: ");
	scanf("%f", &(sv->diemToan));
	printf(" Nhap diem Ly: ");
	scanf("%f", &(sv->diemLy));
	printf(" Nhap diem Hoa: ");
	scanf("%f", &(sv->diemHoa));
	sv->id = id;
	tinhDTB(sv);
	xeploai(sv);
}

void addStudent(Student a[], int id, int n) {
	printLine(40);
	printf("\n Nhap sinh vien thu %d:", n + 1);
	nhapThongTinSV(&a[n], id);
	printLine(40);
}

void printLine(int n) {
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("_");
	}
	printf("\n");
}

void pressAnyKey() {
	printf("\n\nBam phim bat ky de tiep tuc...");
	getchar();
	system("cls");
}

int idMax(SV a[], int n) {
    int idMax = 0;
    if (n > 0) {
        idMax = a[0].id;
        for (int i = 0; i < n; i++) {
            if (a[i].id > idMax) {
                idMax = a[i].id;
            }
        }
    }
    return idMax;
}

int docFile(SV a[], char fileName[]) {
    FILE *fp;
    int i = 0;
    fp = fopen(fileName, "r");
    printf("Chuan bi doc file: ");
    puts(fileName);

    while (fscanf(fp, "%5d%30s%5s%5d%10f%10f%10f%10f%10s\n", &a[i].id, &a[i].ten,
                  &a[i].gioiTinh, &a[i].tuoi, &a[i].diemToan, &a[i].diemLy, &a[i].diemHoa,
                  &a[i].diemTB, &a[i].hocluc) != EOF) {
        i++;
        printf(" Doc ban ghi thu: %d\n", i);
    }
    printf(" So luong sinh vien co san trong file la: %d\n", i);
    fclose(fp);
    return i;
}
































