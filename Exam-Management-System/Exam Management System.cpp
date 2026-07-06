// C++ program for the Examination Management System
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct student
{
	char name[20];
	int rno;
	char fees;
	float days;
	float attend;
} 
s[50];
int option = 0;
int i = 0;
int n = 0;
int j = 0;
float present = 75.00;
char money = 'P';
float tdays = 1;
// ALL Functions 
void add(struct student s[]);// registration system
void eligibleStudents(struct student s[]);//function for eligible students
void execute();// Function to execute the software
void printStudents(struct student s[]);// Function to print the student
void deleteRecord(struct student s[]);// for the student examination

void eligibleStudents(struct student s[])
{
	cout<<"                  \t\t\t\t\t____________________________________________________________ \n";
	cout<<"ELIGIBLE STUDENTS ARE AS FOLLOWS   \n";
	for (i = 0; i < n; i++) 
	{
		if (s[i].fees == 'p'|| s[i].fees=='P') 
		{
			if (s[i].attend >= present)
			{	   
	    cout<<"                 \t\t\t\t\t ==========================================================="<<endl;
		cout<<"                \t\t\t\t\t -----------------------------------------------------------"<<endl;
		cout<<"                \t\t\t\t\t ||        STUDENT NAME                          ||"<<s[i].name<<endl;
		cout<<"                \t\t\t\t\t ||        STUDENT ROLL NUMBER                   ||"<<s[i].rno<<endl;
		cout<<"                  \t\t\t\t\t ||        STUDENT FEE                           ||"<<s[i].fees<<endl;
		cout<<"                 \t\t\t\t\t ||        STUDENT ATTENDENCE                    ||"<<s[i].attend<<"%"<<endl;
		cout<<"                 \t\t\t\t\t -----------------------------------------------------------"<<endl;
				
			}
		}
	}
}

void execute()
{
		
    cout<<"\n\n\t\t\t<+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><+>"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***ENTER THE SERIAL NUMBER TO SELECT THE OPTION ***                     ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
     cout<<"\t\t\t********                       ***1.TO SHOW ELIGIBLE CANDIDATES ***                                   ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***2. TO DELETE THE STUDENT RECORD ***                                  ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***3. TO CHANGE THE ELIGIBILITY CRITERIA ***                            ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***4. RESET THE ELIGIBILITY CRITERIA ***                                ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***5. PRINT THE LIST OF ALL THE STUDENT ***                             ********"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
    cout<<"\t\t\t********                       ***ENTER 0 TO EXIT  ***                                                 ********"<<endl;
    cout<<"\n\n\t\t\t<+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><+>"<<endl;
    cout<<"\t\t\t++++++++++++++++                                                                                +++++++++++++++"<<endl;
	cin>>option;
	switch (option)
	{
	case 1:
		
		eligibleStudents(s);
		execute();
		break;

	case 2:
		
		deleteRecord(s);
		execute();
		break;

	case 3:
		
	cout<<"                 =================================================="<<endl;
		cout<<"OLD ATTENDENCE REQUIRED IS "<<present<<"%";
		cout<<"\n ENTER THE UPDATED ATTENDENCE REQUIRE FOR EXAM\n";
		cin>>present;
		cout<<"FEE STATUS REQUIRED WAS  " <<money<<"\n";
		cout<<"ENTER THE NEW FEE STATUS 'P' FOR PAID'N' FOR NOT PAID AND  'B' FOR BOTH \n";
		cin>>money;
		cout<<"Eligibility CRITERIA UPDATED \n";
		execute();
	cout<<"                 --------------------------------------------------"<<endl;
		break;
	case 4:
		
		present = 75.00;
		money = 'P';
		cout<<"ELIGIBILITY CRITERIA RESET SUCCESSFULLY \n";
		execute();
		break;

	case 5:
		
		printStudents(s);
		execute();
		break;

	case 6:
		
		execute();
		break;

	case 0:
		
		exit(0);

	default:
		
		cout<<"ENTER NUMBER ONLY FROM  0-4 \n";
		execute();
	}
}

// Function to print the students record
void printStudents(struct student s[])
{
	for (i = 0; i < n; i++) 
	{
				   cout<<"\n\n\t\t\t<+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+><+>"<<endl;
    cout<<"\t\t\t\t\t++++++++++++++++      LIST OF ALL THE STUDENTS YOU ADD FOR EXAM          +++++++++++++++"<<endl;
	   	cout<<"\t\t\t\t\t                 =========================================================="<<endl;
		cout<<"\t\t\t\t\t                 ----------------------------------------------------------"<<endl;

		cout<<"\t\t\t\t\t                 ||        NAME OF STUDENT                       ||"<<s[i].name<<endl;
		cout<<"\t\t\t\t\t                 ||        STUDENT ROLL NUMBER                   ||"<<s[i].rno<<endl;
		cout<<"\t\t\t\t\t                 ||        STUDENT FEE STATUS                    ||"<<s[i].fees<<endl;
		cout<<"\t\t\t\t\t                 ||        STUDENT NUMBER OF DAYS PRESENT        ||"<<s[i].days<<endl;
		cout<<"\t\t\t\t\t                 ||        STUDENT ATTENDENCE                    ||"<<s[i].attend<<"%"<<endl;
		cout<<"\t\t\t\t\t                 ----------------------------------------------------------"<<endl;
	}
}

void deleteRecord(struct student s[])
{
	int a = 0;
	cout<<"ENTER THE ROLL NUMBER OF STUDENT TO DELETE RECORD ";
	cin>>a;

	for (i = 0; i <= n; i++) 
	{

		if (s[i].rno == (a))
		{

			for (j = i; j < n; j++)
			{
				strcpy(s[j].name, s[j + 1].name);
				s[j].rno = s[j + 1].rno;
				s[j].fees = s[j + 1].fees;
				s[j].days = s[j + 1].days;
				s[j].attend = s[j + 1].attend;
			}
			cout<<"STUDENT RECORD DELETED  SUCCESSFULLY";
		}
	}
}


void add(struct student s[50])
{
	
 	cout<<" \t\t                                      ====================================="<<endl;
	cout<<" \t\t                                                  STUDENT RECORD "<<endl;
	cout<<" \t\t                                      ====================================="<<endl;
	cout<<"ENTER THE TOTAL NUMBER OF CLASSES IN WHOLE SEMESTER ";
	cin>>tdays;
	cout<<"ENTER THE NUMBER OF STUDENTS IN CLASS ";
	cin>>n;
	for (i = 0; i < n; i++) 
	{

	cout<<"STUDENT NUMBER : "<< (i + 1);
       cout<<endl;
       	cout<<"\t\t\t                     =============================================================="<<endl;
		cout<<"\t\t\t                     --------------------------------------------------------------"<<endl;
	cout<<"\t\t\t                                         ENTER THE NAME OF STUDENT :";
		cin>>s[i].name;
	cout<<"\t\t\t                                          ENTER THE ROLL NUMBER :";
		cin>>s[i].rno;
    cout<<"\t\t\t                        ENTER THE FEES OF STUDENT 'P' FOR PAID , 'N' FOR NOT PAID :";
		cin>>s[i].fees;
	cout<<"\t\t\t                             ENTER THE NUMBER OF DAYS THE STUDENT WAS PRESENT  :";
		cin>>s[i].days;

		s[i].attend = (s[i].days/ tdays)* 100;
	cout<<" \t\t\t                                          STUDENT ATTENDENCE = "<<	s[i].attend<<"%"<<endl;;
       	cout<<"  \t\t\t                    ============================================================"<<endl;
		cout<<"   \t\t\t                   ------------------------------------------------------------"<<endl;
	}
	execute();
}

int main()
{
	cout<<"                     \n\n\n\t\t\t\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*>***************************************************<*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*>**                                               **<*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*>**     ***WELCOME TO EXAM MANAGEMENT SYSTEM ***  **<*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*>**                                               **<*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*>***************************************************<*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"                        \t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"ENTER 0 TO EXIT\n";
	cout<<"ENTER 1 TO ADD STUDENT RECORD \n";
	cin>>option;
	switch (option) 
	{
	case 0:
		exit(0);

	case 1:
		add(s);
		break;

	default:
		
		cout<<"ONLY ENTER 0 or 1";
		execute();
	}
	return 0;
}

