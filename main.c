#include<stdio.h>
#include<string.h>

    struct student{
        int rollno;
        char name[30];
        float cgpa;
    }s[20];
    
    void add_student(int );
    
    void modify_student(int );
    
    void search_student(int );
    
    void display_student(int );
    
    int main(){
        int option,no_of_student=0,search,process=1;
        printf("-----WELCOME TO STUDENT DETAILS MANAGEMENT SYSTEM-----\n");
        do{
            printf("\n1) Add student details\n2) Modify student details\n3) Search for student details\n4) Display all student details\n5) Total number student registered\n6) End task\nChoose a option : ");
            scanf("%d",&option);
            switch(option){
                case 1:
                    printf("\nAdd student details\n");
                    add_student(no_of_student);
                    no_of_student++;
                    break;
                case 2:
                    printf("\nModify student details\n");
                    modify_student(no_of_student);
                    break;
                case 3:
                    printf("\nSearch for student details\n");
                    search_student(no_of_student);
                    break;
                case 4:
                    printf("\nAll student details present\n");
                    display_student(no_of_student);
                    break;
                case 5:
                    printf("\nTotal number of student details present : %d\n",no_of_student);
                    break;
                case 6:
                    printf("\n-----THANKYOU VISIT AGAIN-----\n");
                    process=0;
                    break;
                default:
                    printf("Invailed option\nPlease try again\n");
                    break;
            }
        }while(process==1);
    return 0;
    }
    
    void add_student(int no_of_student){
        printf("Enter the details of student %d\n",no_of_student+1);
        printf("Roll number : ");
        scanf("%d",&s[no_of_student].rollno);
        printf("Name : ");
        scanf("%s",s[no_of_student].name);
        printf("CGPA : ");
        scanf("%f",&s[no_of_student].cgpa);
    }
    
    void modify_student(int no_of_student){
        int student_rollno, flag=0;
        printf("Enter the roll number of student to modify : ");
        scanf("%d",&student_rollno);
        for(int i=0; i<no_of_student; i++){
            if(student_rollno==s[i].rollno){
                printf("Enter the new details of student %d\n",i+1);
                printf("Roll number : ");
                scanf("%d",&s[i].rollno);
                printf("Name : ");
                scanf("%s",s[i].name);
                printf("CGPA : ");
                scanf("%f",&s[i].cgpa);
                flag=1;
            }
        }
        if(flag==0){
            printf("Entered roll number does not exist\nTry again\n");
        }
    }
    
    void search_student(int no_of_student){
        int student_rollno, flag=0;
        printf("Enter the roll number of student to search : ");
        scanf("%d",&student_rollno);
        for(int i=0; i<no_of_student; i++){
            if(s[i].rollno==student_rollno){
                printf("Details of student %d\n",i+1);
                printf("Roll number : %d\n",s[i].rollno);
                printf("Name : %s\n",s[i].name);
                printf("CGPA : %.2f\n",s[i].cgpa);
                flag=1;
            }
        }
        if(flag==0){
            printf("Entered roll number does not exist\nTry again\n");
        }
    }
    
    void display_student(int no_of_student){
        for(int i=0; i<no_of_student; i++){
            printf("\nDetails of student %d\n",i+1);
            printf("Roll number : %d\n",s[i].rollno);
            printf("Name : %s\n",s[i].name);
            printf("CGPA : %.2f\n",s[i].cgpa);
        }

    }
