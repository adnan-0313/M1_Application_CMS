#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct Student
{
    char Student_Name[50];
    char Student_Id[15];
    char Student_Dept[10];
    char Student_Address[100];
    char Student_Contact_Number[15];
    float Student_CGPA;
} Student;

void Create_Account();
void Display_Information();
void Updation_Information();
void Deletion_Information();
void Searching_Information();

int main()
{
    char Option;

    while (Option != '0')
    {
        system("cls");
        printf("\t\t======***###$$$ LOVELY PROFESSIONAL UNIVERSITY $$$###***======\n");
        printf("\n\t\t\t1.*** |Create Student Account          | ***");
        printf("\n\t\t\t2.*** |Display All Students Information| ***");
        printf("\n\t\t\t3.*** |Update Student Information      | ***");
        printf("\n\t\t\t4.*** |Delete Student Information      | ***");
        printf("\n\t\t\t5.*** |Search Student Information      | ***");
        printf("\n\t\t\t0.*** |Exit                            | ***");

        printf("\n\n\n\t\t\t*** Enter Your Option: ***");
        scanf(" %c", &Option);

        switch (Option)
        {
        case '1':
            Create_Account();
            break;
        case '2':
            Display_Information();
            break;
        case '3':
            Updation_Information();
            break;
        case '4':
            Deletion_Information();
            break;
        case '5':
            Searching_Information();
            break;
        case '0':
            printf("\n\t\t\t====== Thank You ======");
            break;
        default:
            printf("\n\t\t\tInvalid Option, Please Enter Right Option !\n");
        }
    }
    return 0;
}

void Create_Account()
{
    FILE *fileOne = fopen("studentInfo.bin", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    Student stundentInformation;

    system("cls");

    printf("\t\t\t====== Create Student Account ======\n");

    printf("\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(stundentInformation.Student_Name);
    printf("\t\t\tEnter Student's ID : ");
    gets(stundentInformation.Student_Id);
    printf("\t\t\tEnter Student's Depertment : ");
    gets(stundentInformation.Student_Dept);
    printf("\t\t\tEnter Student's Address : ");
    gets(stundentInformation.Student_Address);
    printf("\t\t\tEnter Student's Contact Number : ");
    gets(stundentInformation.Student_Contact_Number);
    printf("\t\t\tEnter Student's Current CGPA : ");
    scanf("%f", &stundentInformation.Student_CGPA);

    fwrite(&stundentInformation, sizeof(stundentInformation), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}

void Display_Information()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    Student stundentInformation;

    system("cls");

    printf("\t\t\t\t====== All Students Information ======\n");

    printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Address", "Contact", "CGPA");
    printf("\t\t----------------------------------------------------------------------------------------");

    while (fread(&stundentInformation, sizeof(stundentInformation), 1, fileOne) == 1)
    {
        printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-.2f", stundentInformation.Student_Name, stundentInformation.Student_Id, stundentInformation.Student_Dept, stundentInformation.Student_Address, stundentInformation.Student_Contact_Number, stundentInformation.Student_CGPA);
    }

    printf("\n\n\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}

void Updation_Information()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");
    FILE *temp = fopen("temp.bin", "wb");

    Student Information_Student, Temporary_Information;

    int choice, flag = 0;

    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    system("cls");

    printf("\t\t\t\t====== Update Students Information ======\n");

    printf("\n\t\t\tEnter Student's ID : ");
    getchar();
    gets(Temporary_Information.Student_Id);

    while (fread(&Information_Student, sizeof(Information_Student), 1, fileOne) == 1)
    {
        if (strcmp(Information_Student.Student_Id, Temporary_Information.Student_Id) == 0)
        {
            flag++;
            printf("\n\t\t\tChoose your Option :\n\t\t\t1.Update Student Name\n\t\t\t2.Update Student Dept.\n\t\t\t3.Update Student Address\n\t\t\t4.Update Student Contact No.\n\t\t\t5.Update Student CPGA");
            printf("\n\n\t\t\tEnter Your Option : ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("\n\t\t\tEnter Student's Name to Update: ");
                getchar();
                gets(Temporary_Information.Student_Name);
                strcpy(Information_Student.Student_Name, Temporary_Information.Student_Name);

                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
                printf("\n\n\t\t\tUpdated successfully!\n\n");
            }
            else if (choice == 2)
            {
                printf("\n\t\t\tEnter Student's Dept. to Update: ");
                getchar();
                gets(Temporary_Information.Student_Dept);
                strcpy(Information_Student.Student_Dept, Temporary_Information.Student_Dept);

                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
                printf("\n\n\t\t\tUpdated successfully!\n\n");
            }
            else if (choice == 3)
            {
                printf("\n\t\t\tEnter Student's Address to Update: ");
                getchar();
                gets(Temporary_Information.Student_Address);
                strcpy(Information_Student.Student_Address, Temporary_Information.Student_Address);

                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
                printf("\n\n\t\t\tUpdated successfully!\n\n");
            }
            else if (choice == 4)
            {
                printf("\n\t\t\tEnter Student's Contact No. to Update: ");
                getchar();
                gets(Temporary_Information.Student_Contact_Number);
                strcpy(Information_Student.Student_Contact_Number, Temporary_Information.Student_Contact_Number);

                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
                printf("\n\n\t\t\tUpdated successfully!\n\n");
            }
            else if (choice == 5)
            {
                printf("\n\t\t\tEnter Student's CGPA to Update: ");
                scanf("%f", &Temporary_Information.Student_CGPA);
                Information_Student.Student_CGPA = Temporary_Information.Student_CGPA;

                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
                printf("\n\n\t\t\tUpdated successfully!\n\n");
            }
            else
            {
                printf("\n\t\t\tInvalid Option.");
                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
            }
        }
        else
        {
            fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
        }
    }

    fclose(fileOne);
    fclose(temp);

    remove("studentInfo.bin");
    rename("temp.bin", "studentInfo.bin");

    if (flag == 0)
    {
        printf("\n\t\t\tStudent Id is not found");
    }

    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();
}

void Deletion_Information()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");
    FILE *temp = fopen("temp.bin", "wb");

    Student Information_Student, Temporary_Information;

    int choice, flag = 0;

    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    system("cls");

    printf("\t\t\t\t====== Delete Student Information ======\n");

    printf("\n\t\t\tEnter Student's ID : ");
    getchar();
    gets(Temporary_Information.Student_Id);

    while (fread(&Information_Student, sizeof(Information_Student), 1, fileOne) == 1)
    {
        if (strcmp(Information_Student.Student_Id, Temporary_Information.Student_Id) == 0)
        {
            flag++;
            printf("\n\t\t\tAre you sure to delete ??\n\t\t\t\t1.Yes\n\t\t\t\t2.Back\n\t\t\t\tEnter Your Option : ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("\n\n\t\t\tInformation has been deleted successfully!\n\n");
            }
            else if (choice == 2)
            {
                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
            }
            else
            {
                printf("\n\t\t\tInvalid Option");
                fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
            }
        }
        else
        {
            fwrite(&Information_Student, sizeof(Information_Student), 1, temp);
        }
    }

    fclose(fileOne);
    fclose(temp);

    remove("studentInfo.bin");
    rename("temp.bin", "studentInfo.bin");

    if (flag == 0)
    {
        printf("\n\t\t\tStudent Id is not found");
    }

    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();
}

void Searching_Information()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");

    Student Information_Student;

    int choice, flag = 0;
    char studentID[20], Student_Dept[10];

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    system("cls");

    printf("\t\t\t\t====== Search Student Information ======\n");

    printf("\n\t\t\tChoose your Option :\n\t\t\t1.Search by Student ID\n\t\t\t2.Search by Student Dept.");
    printf("\n\n\t\t\tEnter Your Option : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");
        printf("\t\t\t\t====== Search Student Information ======\n");
        printf("\n\n\t\t\tEnter Student ID : ");
        getchar();
        gets(studentID);
        while (fread(&Information_Student, sizeof(Information_Student), 1, fileOne) == 1)
        {
            if (strcmp(Information_Student.Student_Id, studentID) == 0)
            {
                flag++;
                printf("\n\t\t\tStudent Name : %s\n\t\t\tStudent ID : %s\n\t\t\tStudent Dept. : %s\n\t\t\tStudent Address : %s\n\t\t\tStudent Contact No. : %s\n\t\t\tStudent CGPA : %.2f\n", Information_Student.Student_Name, Information_Student.Student_Id, Information_Student.Student_Dept, Information_Student.Student_Address, Information_Student.Student_Contact_Number, Information_Student.Student_CGPA);
            }
        }
        if (flag == 0)
        {
            printf("\n\t\t\tStudent Id is not found");
        }
    }
    else if (choice == 2)
    {
        system("cls");
        printf("\t\t\t\t====== Search Student Information ======\n");
        printf("\n\n\t\t\tEnter Student Dept. : ");
        getchar();
        gets(Student_Dept);
        printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Address", "Contact", "CGPA");
        printf("\t\t----------------------------------------------------------------------------------------");
        while (fread(&Information_Student, sizeof(Information_Student), 1, fileOne) == 1)
        {
            if (stricmp(Information_Student.Student_Dept, Student_Dept) == 0)
            {
                flag++;
                printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-.2f", Information_Student.Student_Name, Information_Student.Student_Id, Information_Student.Student_Dept, Information_Student.Student_Address, Information_Student.Student_Contact_Number, Information_Student.Student_CGPA);
            }
        }
        if (flag == 0)
        {
            printf("\n\t\t\tStudent Id is not found");
        }
    }
    else
    {
        printf("\n\t\t\tInvalid Option");
    }

    fclose(fileOne);

    printf("\n\n\n\t\t\tEnter any keys to continue.......");
    getch();
}
