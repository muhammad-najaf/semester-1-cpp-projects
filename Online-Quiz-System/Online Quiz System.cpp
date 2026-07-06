#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
struct student    //structure of student
{
	char fname[15],lname[15];
	int marks;
};
student st;
  //function defination
void welcome()    
{
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*>***************************************************<*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*>**                                               **<*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*>**      ***WELCOME TO ONLINE QUIZ SYSTEM***      **<*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*>**                                               **<*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*>***************************************************<*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\n\t\t\tEnter your First Name:  ";     // input from user
    cin>>st.fname;
    cout<<"\t\t\tEnter your Last Name:  ";        // input from user
    cin>>st.lname;
}
void selection()
{
    cout<<"\n\n\t\t\t<+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+>"<<endl;
    cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\t*****                ***SUBJECT SELECTION MENU***                *****"<<endl;
    cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\t*****               ***BS SOFTWARE ENGINEERING***                *****"<<endl;
    cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\t*****                     ***1ST SEMESTER***                     *****"<<endl;
    cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\t<+><+><+><+><+><+><+><+><+><+><+><++><+><+><+><+><+><+><+><+><+><+><+>"<<endl;
    cout<<"\n\n\t\t\t**********************************************************************"<<endl;
    cout<<"\t\t\tPress 1 for Introduction to Information and Communication Technology"<<endl;
    cout<<"\t\t\tPress 2 for Programming Fundamental"<<endl;
    cout<<"\t\t\tPress 3 for Discrete Structure"<<endl;
    cout<<"\t\t\tPress 4 for Applied Physics"<<endl;
    cout<<"\t\t\tPress 5 for English"<<endl;
    cout<<"\t\t\tPress 6 for Pre Calculus"<<endl;
    cout<<"\t\t\t**********************************************************************"<<endl;
    cout<<"\n\t\t\tSelect the subject which you want to give the quiz:  ";   //choice of the user
}
void ict()
{
	st.marks=0;
	char answer;
	int percentage;
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*              ***WELCOME TO ICT QUIZ***               *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tMonitor is a ______ device?"<<endl;
	cout<<"\t\t\ta) Input device"<<endl;	
	cout<<"\t\t\tb) Output device"<<endl;	
	cout<<"\t\t\tc) Storage device"<<endl;	
	cout<<"\t\t\td) Communication device"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' || answer=='B')  //condition true
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else            // condition false
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\tFastest, most expensive and powerful type of computer?"<<endl;
	cout<<"\t\t\ta) Super computer"<<endl;	
	cout<<"\t\t\tb) Embedded computer"<<endl;	
	cout<<"\t\t\tc) Mainframe computer"<<endl;	
	cout<<"\t\t\td) Personal computer"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' || answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\tYour answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\tCorrect answer is 'a'."<<endl;
    	cout<<"\t\t\t\t     <---------------------------------------->"<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\tWhat abouts fourth generation of computer?"<<endl;
	cout<<"\t\t\ta) 1946 - 1958"<<endl;	
	cout<<"\t\t\tb) 1959 - 1964"<<endl;	
	cout<<"\t\t\tc) 1965 - 1970"<<endl;	
	cout<<"\t\t\td) 1971 - today"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' || answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tThe use of spoofed domain names to obtain personal information?"<<endl;
	cout<<"\t\t\ta) Cyber bullying"<<endl;	
	cout<<"\t\t\tb) Phishing"<<endl;	
	cout<<"\t\t\tc) Pharming"<<endl;	
	cout<<"\t\t\td) Dot con"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' || answer=='C')
	{
	    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
	    cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	    st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tA sequence of activities to be processed for getting desired output from a given input?"<<endl;
	cout<<"\t\t\ta) Algorithm"<<endl;	
	cout<<"\t\t\tb) Pseudocode"<<endl;	
	cout<<"\t\t\tc) Implementation phase"<<endl;	
	cout<<"\t\t\td) Problem solving phase"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' || answer=='A')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 6:-"<<endl;
	cout<<"\t\t\tPerforming operations on the data?"<<endl;
	cout<<"\t\t\ta) Processing"<<endl;	
	cout<<"\t\t\tb) Input"<<endl;	
	cout<<"\t\t\tc) Output"<<endl;	
	cout<<"\t\t\td) Storage"<<endl;
	cout<<"\t\t\tEnter correct answer: ";
	cin>>answer;
	if(answer=='a' || answer=='A')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 7:-"<<endl;
	cout<<"\t\t\tData that has been processed into a meaningful form?"<<endl;
	cout<<"\t\t\ta) Processing"<<endl;	
	cout<<"\t\t\tb) Input"<<endl;	
	cout<<"\t\t\tc) Information"<<endl;	
	cout<<"\t\t\td) Data"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' || answer=='C')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 8:-"<<endl;
	cout<<"\t\t\tMicrophone is a ______ device?"<<endl;
	cout<<"\t\t\ta) Processing"<<endl;	
	cout<<"\t\t\tb) Input"<<endl;	
	cout<<"\t\t\tc) Output"<<endl;	
	cout<<"\t\t\td) Storage"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' || answer=='B')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }    
	cout<<"\n\n\t\t\t=> Question NO 9:-"<<endl;
	cout<<"\t\t\tThe programs or instructions used to tell the computer hardware what to do?"<<endl;
	cout<<"\t\t\ta) Software"<<endl;	
	cout<<"\t\t\tb) Input"<<endl;	
	cout<<"\t\t\tc) Output"<<endl;	
	cout<<"\t\t\td) Storage"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' || answer=='A')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 10:-"<<endl;
	cout<<"\t\t\tMalware is a _____ software?"<<endl;
	cout<<"\t\t\ta) Processing"<<endl;	
	cout<<"\t\t\tb) Beneficial"<<endl;	
	cout<<"\t\t\tc) Malicious"<<endl;	
	cout<<"\t\t\td) Storage"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' || answer=='C')
	{
    	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();  
    system("cls");   //To clear the screen
    //Result Display on the screen
    cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
    if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}  //end of ict function

void pf()
{
	st.marks=0;
	char answer;
	int percentage;
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*               ***WELCOME TO PF QUIZ***               *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tTo store a value inside a computer _______ is used?"<<endl;
	cout<<"\t\t\ta) Variable"<<endl;	
	cout<<"\t\t\tb) Class"<<endl;	
	cout<<"\t\t\tc) Pointers"<<endl;	
	cout<<"\t\t\td) Structure"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\tKeyword used in declaration of text type data?"<<endl;
	cout<<"\t\t\ta) int"<<endl;	
	cout<<"\t\t\tb) float"<<endl;	
	cout<<"\t\t\tc) double"<<endl;	
	cout<<"\t\t\td) char"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\t&& and || are _______ operators?"<<endl;
	cout<<"\t\t\ta) Arithmetic"<<endl;	
	cout<<"\t\t\tb) Relational"<<endl;	
	cout<<"\t\t\tc) Logical"<<endl;	
	cout<<"\t\t\td) Arithmetic assignment"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tAn if _______ exist without an else?"<<endl;
	cout<<"\t\t\ta) Cannot"<<endl;	
	cout<<"\t\t\tb) Can"<<endl;	
	cout<<"\t\t\tc) Before"<<endl;	
	cout<<"\t\t\td) After"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tAn array is a collection of variables of _______ type?"<<endl;
	cout<<"\t\t\ta) Similar"<<endl;	
	cout<<"\t\t\tb) Alternative"<<endl;	
	cout<<"\t\t\tc) Different"<<endl;	
	cout<<"\t\t\td) No"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	    st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 6:-"<<endl;
	cout<<"\t\t\tA _______ is a variable that stores a memory address?"<<endl;
	cout<<"\t\t\ta) Structure"<<endl;	
	cout<<"\t\t\tb) Pointer"<<endl;	
	cout<<"\t\t\tc) Array"<<endl;	
	cout<<"\t\t\td) Loop"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 7:-"<<endl;
	cout<<"\t\t\t[] recognize?"<<endl;
	cout<<"\t\t\ta) Structure"<<endl;	
	cout<<"\t\t\tb) Pointer"<<endl;	
	cout<<"\t\t\tc) Array"<<endl;	
	cout<<"\t\t\td) Loop"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 8:-"<<endl;
	cout<<"\t\t\tint *pNum = 0;?"<<endl;
	cout<<"\t\t\ta) Pointer"<<endl;	
	cout<<"\t\t\tb) Structure"<<endl;	
	cout<<"\t\t\tc) Wild pointer"<<endl;	
	cout<<"\t\t\td) Null pointer"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 9:-"<<endl;
	cout<<"\t\t\tA _________ is a container, it can hold a bunch of things?"<<endl;
	cout<<"\t\t\ta) Structure"<<endl;	
	cout<<"\t\t\tb) Pointer"<<endl;	
	cout<<"\t\t\tc) Array"<<endl;	
	cout<<"\t\t\td) Loop"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 10:-"<<endl;
	cout<<"\t\t\tIndex number of array is started from?"<<endl;
	cout<<"\t\t\ta) 0"<<endl;	
	cout<<"\t\t\tb) 1"<<endl;	
	cout<<"\t\t\tc) 2"<<endl;	
	cout<<"\t\t\td) 3"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();
    system("cls");
	cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
	if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}  //end of pf function

void discrete()
{
	st.marks=0;
	char answer;
	int percentage=0;
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*       ***WELCOME TO DISCRETE STRUCTURE QUIZ***       *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tA tautology is a statement form that is always _______"<<endl;
	cout<<"\t\t\ta) False"<<endl;	
	cout<<"\t\t\tb) True"<<endl;	
	cout<<"\t\t\tc) Either false or true"<<endl;	
	cout<<"\t\t\td) Neither false nor true"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\t4!= ?"<<endl;
	cout<<"\t\t\ta) 23"<<endl;	
	cout<<"\t\t\tb) 24"<<endl;	
	cout<<"\t\t\tc) 25"<<endl;	
	cout<<"\t\t\td) 26"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\tA set of first elements of ordered pair forming a relation called?"<<endl;
	cout<<"\t\t\ta) Arithmetic"<<endl;	
	cout<<"\t\t\tb) Relational"<<endl;	
	cout<<"\t\t\tc) Domain"<<endl;	
	cout<<"\t\t\td) Range"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	    st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tTwo sets are called disjoint if their intersection is?"<<endl;
	cout<<"\t\t\ta) One"<<endl;	
	cout<<"\t\t\tb) Empty"<<endl;	
    cout<<"\t\t\tc) Universal set"<<endl;	
	cout<<"\t\t\td) singleton set"<<endl;
    cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
    {
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
    }
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\t________ statement could be used to build a compound statement?"<<endl;
	cout<<"\t\t\ta) Similar"<<endl;	
	cout<<"\t\t\tb) Alternative"<<endl;	
	cout<<"\t\t\tc) Different"<<endl;	
    cout<<"\t\t\td) Simple"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 6:-"<<endl;
	cout<<"\t\t\t(2,3) In this pair range is?"<<endl;
	cout<<"\t\t\ta) 2"<<endl;	
	cout<<"\t\t\tb) 3"<<endl;	
	cout<<"\t\t\tc) 2 and 3"<<endl;	
	cout<<"\t\t\td) 2 or 3"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 7:-"<<endl;
	cout<<"\t\t\tFactorial is denoted by?"<<endl;
	cout<<"\t\t\ta) #"<<endl;	
	cout<<"\t\t\tb) !"<<endl;	
	cout<<"\t\t\tc) /"<<endl;	
	cout<<"\t\t\td) %"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 8:-"<<endl;
	cout<<"\t\t\tNegation of TRUE is?"<<endl;
	cout<<"\t\t\ta) False"<<endl;	
	cout<<"\t\t\tb) TRUE"<<endl;	
	cout<<"\t\t\tc) AND"<<endl;	
	cout<<"\t\t\td) OR"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 9:-"<<endl;
	cout<<"\t\t\tIf A={0},then symmetric relation is?"<<endl;
	cout<<"\t\t\ta) (0,1)"<<endl;	
	cout<<"\t\t\tb) (1,0)"<<endl;	
	cout<<"\t\t\tc) (0,0)"<<endl;	
	cout<<"\t\t\td) (0,1)"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 10:-"<<endl;
	cout<<"\t\t\t~(~p) is equivalent to?"<<endl;
	cout<<"\t\t\ta) q"<<endl;	
	cout<<"\t\t\tb) t"<<endl;	
	cout<<"\t\t\tc) c"<<endl;	
	cout<<"\t\t\td) p"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();
	system("cls");
	cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
	if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}  //end of discrete function

void physics()
{
	st.marks=0;
    char answer;
	int percentage=0;
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*        ***WELCOME TO APPLIED PHYSICS QUIZ***         *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tUnit of voltage is _______"<<endl;
    cout<<"\t\t\ta) Volt"<<endl;	
	cout<<"\t\t\tb) Watt"<<endl;	
	cout<<"\t\t\tc) Joule"<<endl;	
	cout<<"\t\t\td) Newton"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	    st.marks++;
	}
	else
    {
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
    cout<<"\t\t\tElectrical current is the rate of flow of ______?"<<endl;
	cout<<"\t\t\ta) Density"<<endl;	
	cout<<"\t\t\tb) Charge"<<endl;	
	cout<<"\t\t\tc) Voltage"<<endl;	
	cout<<"\t\t\td) Work"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\tCollisions cause the electrons to _______ some of their energy?"<<endl;
	cout<<"\t\t\ta) Used"<<endl;	
	cout<<"\t\t\tb) Gain"<<endl;	
	cout<<"\t\t\tc) Lose"<<endl;	
	cout<<"\t\t\td) Manage"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tThe property of a material to oppose the flow of electrons is called?"<<endl;
	cout<<"\t\t\ta) Battery"<<endl;	
	cout<<"\t\t\tb) Power"<<endl;	
	cout<<"\t\t\tc) Current"<<endl;	
	cout<<"\t\t\td) Resistance"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tThe reciprocal of resistance is ?"<<endl;
	cout<<"\t\t\ta) Conductance"<<endl;	
	cout<<"\t\t\tb) Alternative"<<endl;	
	cout<<"\t\t\tc) Different"<<endl;	
	cout<<"\t\t\td) Simple"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 6:-"<<endl;
	cout<<"\t\t\t. The basic particles of negative charge are called?"<<endl;
	cout<<"\t\t\ta) Neutrons"<<endl;	
	cout<<"\t\t\tb) Electron"<<endl;	
	cout<<"\t\t\tc) Positron"<<endl;	
	cout<<"\t\t\td) Proton"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 7:-"<<endl;
	cout<<"\t\t\t. The atomic number equals the number of protons in the _______?"<<endl;
	cout<<"\t\t\ta) Material"<<endl;	
	cout<<"\t\t\tb) Compound"<<endl;	
	cout<<"\t\t\tc) Element"<<endl;	
	cout<<"\t\t\td) Nucleus"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 8:-"<<endl;
	cout<<"\t\t\tHelium has an atomic number of ?"<<endl;
	cout<<"\t\t\ta) 1"<<endl;	
	cout<<"\t\t\tb) 2"<<endl;	
	cout<<"\t\t\tc) 3"<<endl;	
	cout<<"\t\t\td) 4"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
    {
	    cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 9:-"<<endl;
	cout<<"\t\t\tThe outermost shell is called?"<<endl;
	cout<<"\t\t\ta) Filled shell"<<endl;	
	cout<<"\t\t\tb) Bonding shell"<<endl;	
	cout<<"\t\t\tc) Valence shell"<<endl;	
	cout<<"\t\t\td) Finite shell"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
	{
	    cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 10:-"<<endl;
	cout<<"\t\t\tSemiconductors have _____ valence electrons in their atomic structures.  ?"<<endl;
	cout<<"\t\t\ta) Four"<<endl;	
	cout<<"\t\t\tb) Five"<<endl;	
	cout<<"\t\t\tc) Six"<<endl;	
	cout<<"\t\t\td) Seven"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
    else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();
	system("cls");	
	cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
    if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}   //end of physics function

void english()
{
	st.marks=0;
	char answer;
	int percentage=0;
    cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*            ***WELCOME TO ENGLISH QUIZ***             *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tIn Present tense: She ______ to school."<<endl;
	cout<<"\t\t\ta) Goes"<<endl;	
	cout<<"\t\t\tb) Go"<<endl;	
	cout<<"\t\t\tc) Went"<<endl;	
	cout<<"\t\t\td) Gone"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
	    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\tIf you get good marks you ____ pass?"<<endl;
	cout<<"\t\t\ta) Should"<<endl;	
	cout<<"\t\t\tb) Will"<<endl;	
	cout<<"\t\t\tc) Shall"<<endl;	
	cout<<"\t\t\td) Are"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\tIn perfect tense ______ form of verb is used?"<<endl;
	cout<<"\t\t\ta) 1st"<<endl;	
    cout<<"\t\t\tb) 2nd"<<endl;	
    cout<<"\t\t\tc) 3rd"<<endl;	
	cout<<"\t\t\td) Any"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tHe _____ arrive on time?"<<endl;
	cout<<"\t\t\ta) Is"<<endl;	
	cout<<"\t\t\tb) Not"<<endl;	
	cout<<"\t\t\tc) Shall"<<endl;	
	cout<<"\t\t\td) Will"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tWe ______ David in town a few days ago?"<<endl;
	cout<<"\t\t\ta) Did see"<<endl;	
	cout<<"\t\t\tb) Was saw"<<endl;	
	cout<<"\t\t\tc) Did saw"<<endl;	
	cout<<"\t\t\td) Saw"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
    }
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\t=> Question NO 6:-"<<endl;
	cout<<"\t\t\tMaryam ______ rabia live in the house?"<<endl;
	cout<<"\t\t\ta) Is"<<endl;	
	cout<<"\t\t\tb) Not"<<endl;	
	cout<<"\t\t\tc) Or"<<endl;	
	cout<<"\t\t\td) And"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 7:-"<<endl;
	cout<<"\t\t\tIf I went home I ______ meet my family?"<<endl;
	cout<<"\t\t\ta) Would"<<endl;	
	cout<<"\t\t\tb) Should"<<endl;	
	cout<<"\t\t\tc) Shall"<<endl;	
	cout<<"\t\t\td) Will"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 8:-"<<endl;
	cout<<"\t\t\tThey _____?"<<endl;
	cout<<"\t\t\ta) Goes"<<endl;	
	cout<<"\t\t\tb) Go"<<endl;	
	cout<<"\t\t\tc) Gone"<<endl;	
	cout<<"\t\t\td) Went"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 9:-"<<endl;
	cout<<"\t\t\tThere _______ many hurdles to jump?"<<endl;
	cout<<"\t\t\ta) Is"<<endl;	
	cout<<"\t\t\tb) May"<<endl;	
	cout<<"\t\t\tc) Are"<<endl;	
	cout<<"\t\t\td) Will"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\tYour answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\tCorrect answer is 'c'."<<endl;
    	cout<<"\t\t\t\t     <---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 10:-"<<endl;
	cout<<"\t\t\tAll of the cake ____ finished?"<<endl;
	cout<<"\t\t\ta) Is"<<endl;	
	cout<<"\t\t\tb) Not"<<endl;	
	cout<<"\t\t\tc) Shall"<<endl;	
	cout<<"\t\t\td) Will"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();
    system("cls");
    cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
   if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}  //end of english function

void calculus()
{
	st.marks=0;
    char answer;
	int percentage=0;
    cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*          ***WELCOME TO PRE CALCULUS QUIZ***          *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\tQuestion NO 1:-"<<endl;
	cout<<"\t\t\tEvery function is a?"<<endl;
	cout<<"\t\t\ta) Relation"<<endl;	
	cout<<"\t\t\tb) Symmetric"<<endl;	
	cout<<"\t\t\tc) Non-symmetric"<<endl;	
	cout<<"\t\t\td) None of these"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
	    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 2:-"<<endl;
	cout<<"\t\t\tFunction satisfies the condition in which both sets are?"<<endl;
	cout<<"\t\t\ta) Empty"<<endl;	
	cout<<"\t\t\tb) Non-empty"<<endl;	
	cout<<"\t\t\tc) Integer"<<endl;	
	cout<<"\t\t\td) Singleton"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\tQuestion NO 3:-"<<endl;
	cout<<"\t\t\tEvery real number is a complex number with ____ its imaginary part?"<<endl;
	cout<<"\t\t\ta) 0"<<endl;	
    cout<<"\t\t\tb) 1"<<endl;	
    cout<<"\t\t\tc) 2"<<endl;	
	cout<<"\t\t\td) Any"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 4:-"<<endl;
	cout<<"\t\t\tA semi-group having an identity is called ______?"<<endl;
	cout<<"\t\t\ta) Monoid"<<endl;	
	cout<<"\t\t\tb) Non-abelian"<<endl;	
	cout<<"\t\t\tc) Commutative"<<endl;	
	cout<<"\t\t\td) Non-commutative"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 5:-"<<endl;
	cout<<"\t\t\tThe horizontal lines of number in matrix is called?"<<endl;
	cout<<"\t\t\ta) Columns"<<endl;	
	cout<<"\t\t\tb) Rows"<<endl;	
	cout<<"\t\t\tc) Entries"<<endl;	
	cout<<"\t\t\td) Elements"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
    }
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\n\t\t\tQuestion NO 6:-"<<endl;
	cout<<"\t\t\tMatrix A is called real iff all its elements are?"<<endl;
	cout<<"\t\t\ta) Imaginary"<<endl;	
	cout<<"\t\t\tb) Diagonal"<<endl;	
	cout<<"\t\t\tc) Zero"<<endl;	
	cout<<"\t\t\td) Real"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 7:-"<<endl;
	cout<<"\t\t\tm=n then m*n is ______ matrix?"<<endl;
	cout<<"\t\t\ta) Rectangular"<<endl;	
	cout<<"\t\t\tb) Diagonal"<<endl;	
	cout<<"\t\t\tc) Square"<<endl;	
	cout<<"\t\t\td) Null"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 8:-"<<endl;
	cout<<"\t\t\tax^2+bx=c=0 is called?"<<endl;
	cout<<"\t\t\ta) Quardatic Equation"<<endl;	
	cout<<"\t\t\tb) Linear Equation"<<endl;	
	cout<<"\t\t\tc) Homogenous Equation"<<endl;	
	cout<<"\t\t\td) Non-homogenous Equation"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 9:-"<<endl;
	cout<<"\t\t\tThe formula of discriminant is?"<<endl;
	cout<<"\t\t\ta) a^2-4ac"<<endl;	
	cout<<"\t\t\tb) c^2-4ab"<<endl;	
	cout<<"\t\t\tc) b^2-4ac"<<endl;	
	cout<<"\t\t\td) None of these"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
	cout<<"\n\n\t\t\tQuestion NO 10:-"<<endl;
	cout<<"\t\t\tIf square matrix has two identical rows and columns then determinant is?"<<endl;
	cout<<"\t\t\ta) 0"<<endl;	
	cout<<"\t\t\tb) 1"<<endl;	
	cout<<"\t\t\tc) 2"<<endl;	
	cout<<"\t\t\td) 3"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
		st.marks++;
	}
	else
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();
    system("cls");
    cout<<"\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\t:::::                                                        :::::"<<endl;
	cout<<"\t\t\t******************************************************************"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n\t\t\tStudent Name:    "<<st.fname<<" "<<st.lname<<endl;
	cout<<"\t\t\tTotal marks:     10"<<endl;
	cout<<"\t\t\tObtained marks:  "<<st.marks<<endl;
	percentage=(st.marks*100)/10;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
 if(percentage>=90)
    {
    cout<<"\t\t\tGrade:           A"<<endl;
    cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;

	}
	else if(percentage>=80 && percentage<90)
	{
	cout<<"\t\t\tGrade:           B"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=70 && percentage<80)
	{
	cout<<"\t\t\tGrade:           C"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=60 && percentage<70)
	{
	cout<<"\t\t\tGrade:           D"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage>=50 && percentage<60)
	{
	cout<<"\t\t\tGrade:           E"<<endl;
	cout<<"\t\t\tStatus:          Pass"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t      ***Congratulations***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}
	else if(percentage<50)
	{
	cout<<"\t\t\tGrade:           F"<<endl;
	cout<<"\t\t\tStatus:          Fail"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	cout<<"\n\t\t\t\t\t    ***Try for next time***"<<endl;
	cout<<"\n\t\t\t******************************************************************"<<endl;
	}	
}   //end of calculus function

void visit()
{
	system("cls");
	cout<<"\n\n\n\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*     ***THANKS FOR VISITING ONLINE QUIZ SYSTEM***     *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>"<<endl;
}

int main()   // main function
{
	char press;
	system("cls");   // screen clear
	welcome();       // welcome function call
	// starting of the loop
	do{              
	int option;     
	system("cls");
	selection();     // selection function call
	cin>>option;     // input from user
	system("cls");
	//start of the switch
	switch(option)   
	{
		case 1:
			{
				ict();
				break;
			}
		case 2:
			{
				pf();
			    break;
			}
	    case 3:
		    {
		        discrete();
		    	break;
			}
		case 4:
			{
				physics();				
				break;
			}
		case 5:
			{
				english();
				break;
			}
		case 6:
			{
			    calculus();
				break;
			}
			default:
			{
				cout<<"\n\n\n\t\t\tYou enter invalid number.....";
				break;
			}	
		}           // end of the switch
			cout<<"\n\t\t\tDo you want to continue(Y/N)??  ";
			cin>>press;
	}while(press=='y'|| press=='Y');   //end of the loop
	if(press=='n'|| press=='N')
	{
		visit();    // visit function call
	}
}





 
