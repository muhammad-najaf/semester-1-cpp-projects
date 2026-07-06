
#include <iostream> 
#include<conio.h>
using namespace std;

struct BookData 
{
string bookName, author;
 int pages;
float price;
};
int main() 
{
int menuChoice, bookCount = 0, i=1; 
BookData booksArr[5000];
string searchAuthor;
do
{
    
cout << "..Stationary Management System.." << endl << endl;
cout << "1. Add a new book information" << endl ;
cout<< "2. Display book information" << endl ;
cout<< "3. Display all books of given author" << endl ;
cout<<"4. Display the title of specified book" << endl ;
cout<< "5. Display the count off books in the library" << endl ;
cout<< "6. Exit" << endl << endl;

cout << "Enter one of the above: ";
 cin >> menuChoice;
switch (menuChoice)
{

 case 1:

cout << endl;
cout << "Enter book name: ";
 cin >> booksArr[i].bookName; 
 cout << "Enter author name: "; 
 cin >> booksArr[i].author; 
 cout << "Enter pages: ";
cin >> booksArr[i].pages; 
cout << "Enter price: ";
 cin >> booksArr[i].price; 
 cout << endl;
bookCount++;
i++;
break;


case 2:
int bookNumber;
cout << endl << "Enter the book number: ";
cin >> bookNumber;
cout << endl << "Information of Book Number " << bookNumber << ":" << endl;
cout << "Book name: " << booksArr[bookNumber].bookName << endl;
cout << "Author name: " << booksArr[bookNumber].author << endl;
cout << "Book pages: " << booksArr[bookNumber].pages << endl;
cout << "Book price: " << booksArr[bookNumber].price << endl << endl;
break; 


case 3:
int j;
cout << "Enter author name: "; 
cin >> searchAuthor;
cout << endl << "Books of Author " << searchAuthor << " are listed below:"<< endl;
for ( j = 1; j <= i; j++)
{
if (searchAuthor == booksArr[j].author)
{
cout << booksArr[j].bookName << endl;
};
}
break; 

case 4:
cout << endl << "Enter the book number: "; 
cin >> bookNumber;
cout << "Title of book number " << bookNumber << ": " << booksArr [bookNumber].bookName << endl << endl;
break;

 case 5:
cout << "Number of books in the library: " << bookCount << endl << endl;
break;

 case 6:
exit(0);
break;

default:
cout << "Invalid choice. Please choose an option from 1 to 6." << endl << endl;
break;
} 
cout<<endl;
}
while (menuChoice != 6);
return 0;
}
