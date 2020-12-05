#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <list>
#include <map>
#include <string>
#include <vector>
#include "Assignments.cpp"

/*
 * Assignment Examples
 * Introduction 1/30
 * Coding Fundamentals 2/25
 * Midterm Paper 3/20
 * Queue Project 3/30
 * Tree Project 4/29
 * Final Paper 5/3
 */

using namespace std;

//Swap Function. Will be Useful in the Change Due Date Function
void swap(map<string, double>& inOrder)
{
    
    //For Statement Iterator Here

}

//User Choices
void Choices()
{
  cout << "1. View Default Assignments?" << endl;
  cout << "2. Insert New Assignments?" << endl;
  cout << "3. Remove Assignments?" << endl;
  cout << "4. ChangeDate?" << endl;
  cout << "5. Exit?" << endl;
  cout << "------------------------" << endl;
}

//Exiting Program
void ExitProgram()
{
    cout << "End of Demonstration" << endl;
      //Terminates the Program and Returns 0
      exit(0);
}

//Default Assignments
void MapDefaultAssignments()
{
    AssignmentDueDates syllabus;

    //Iterator
    map<string, double>::iterator it;

    /*
    1. This Part of the Code was templated from Walter Savitch's
    Book Absolute C++ Sixth edition on Page 898 (Program Using the
                                                 map Template Class)
    */

    int a;

    //Setting The Map
    map<string, double> assignments;
    assignments["Introduction"] = 1.30;
    assignments["Coding Fundamentals"] = 2.25;
    assignments["Midterm Paper"] = 3.20;
    assignments["Queue Project"] = 3.30;
    assignments["Tree Project"] = 4.29;
    assignments["Final Paper"] = 5.03;
    

    //Iterating Through The Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Printing Out The Default Assignments For The Term
      cout << it-> first << " " << it-> second << endl;
    }
   
}
/*End of Reference 1*/

//Stores up to date Current Assignments From What the User Chooses
void CurrentAssignments()
{
  //For Loop To Only Print Out The Default Assignments Once
  for (int i = 0; i < 1; i++)
  {
    MapDefaultAssignments();
  
  }


}

void InsertNewAssignments()
{
    AssignmentDueDates syllabus;
    //Map
    map<string, double> assignments;

    //Pointer
    int *ptr;

    //Iterator
    map<string, double>::iterator it;



    cout << "What is the Name of the Assignment?" << endl;
    getline(cin, syllabus.title);

      cout << "What is the assignment due date?" << endl;
      cin >> syllabus.dueDate;


    cout << "------------------------" << endl;
    //Inserting Assignments and Due Dates

    MapDefaultAssignments();
    assignments.insert({syllabus.title, syllabus.dueDate});

    //Iterating Through The Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Printing Out the Map
      cout << it-> second << " " << it-> first << endl;
    }

}


void RemoveAssignments()
{
    AssignmentDueDates syllabus;

     //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    map<string, double> assignments;

    //Iterator
    map<string, double>::iterator it;

    //Pointer
    int *ptr;

   string title;
      cout << "What Assignment are you deleting?" << endl;
      cin >> title;

    cout << "------------------------" << endl;

    assignments.erase({1});


    //Iterate Through Entire Map to Selected Pointer to the Specific Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Choice
    int choice;
      assignments.erase({1});
    }

    
}


double ChangeDate(double newDueDate)
{
    AssignmentDueDates syllabus;

     cout << "------------------------" << endl;
      cout << "What Assignment Date are you Changing?" << endl;
      cin >> syllabus.title;
        cout << "------------------------" << endl;

      double dueDate;
      cout << "Insert the new due date" << endl;
      cin >> syllabus.dueDate;

//Pointer
    int *ptr;
    

  AssignmentDueDates newDate;

    return newDueDate;
}


int main() {


    //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    map<string, double> assignments;
    int choice;

    cout << "\nWelcome. This Program demonstrates manipulation of "
            "data" << endl;

    //Variable to Keep The Program going if user chooses so to do.
    static int repeat = 0;

    do
    {
    cout << "What would you like to do? " << endl;
    Choices();
    cin >> choice;

    //View Default Assignments
    if(choice == 1)
    {
      MapDefaultAssignments();
    }

    //Insert A New Assignment
    else if(choice == 2)
    {
      cout << "------------------------" << endl;
      cout << "Current Assignments" << endl;
      cout << "************************" << endl;
      CurrentAssignments();
      InsertNewAssignments();

    }

    //Delete An Assignment
    else if(choice == 3)
    {
      cout << "------------------------" 
      << endl;
      cout << "Assignments List" << endl;
      cout << "------------------------" << endl;
      CurrentAssignments();
      cout << "------------------------" << endl;
      RemoveAssignments();
      cout << "------------------------" << endl;
    }

    //Change Due Date to an Assignment
    else if(choice == 4)
    {

        double n;
      cout << "------------------------" << endl;
      //Insert Function Here For Current Assignments

      CurrentAssignments();
       
      ChangeDate(n);

    }

    //Exit Program
    else if(choice == 5)
    {
      ExitProgram();
    }
    else
    {
      cout << "Error" << endl;
    }

    //Asking User if They Would Like to Continue
  cout << "\nWould you like to continue? (Press 1)(Press Any Number to Exit)" << endl;
  cin >> repeat;
  cout << "------------------------" << endl;

    }while(repeat == 1);

    cout << "GoodBye" << endl;
    ExitProgram();

    return 0;
}
