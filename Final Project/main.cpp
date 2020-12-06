#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <string>
#include <vector>
#include "Assignments.cpp"

//Assignemnt Examples
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


//User Choices
void Choices()
{
  cout << "What would you like to do? " << endl;

  cout << "1. View Default Assignments?" << endl;
  cout << "2. View Current Assignments?" << endl;
  cout << "3. Insert New Assignments?" << endl;
  cout << "4. Remove Assignments?" << endl;
  cout << "5. ChangeDate?" << endl;
  cout << "6. Exit?" << endl;
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
    map<double,string>::iterator it;

    /*
    1. This Part of the Code was templated from Walter Savitch's
    Book Absolute C++ Sixth edition on Page 898 (Program Using the
                                                 map Template Class)
    */

    //Setting The Map
    map<double, string> assignments;
    assignments[1.30] = "Introduction";
    assignments[2.25] = "Coding Fundamentals";
    assignments[3.20] = "Midterm Paper";
    assignments[3.30] = "Queue Project";
    assignments[4.29] = "Tree Project";
    assignments[5.03] = "Final Paper";
    

    //Iterating Through The Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Printing Out The Default Assignments For The Term
      printf("%.2f", it-> first); 
      cout << " " << it-> second << endl;
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
   map<double, string> assignments;

    //Iterator
    map<double, string>::iterator it;

    cout << "What is the Name of the Assignment?" << endl;
    getline(cin >> ws, syllabus.title); //Alternative to GetLine https://stackoverflow.com/questions/62374433/alternatives-of-getline

      cout << "What is the assignment due date?" << endl;
      cin >> syllabus.dueDate;

    cout << "------------------------" << endl;
    //Inserting Assignments and Due Dates

    MapDefaultAssignments();
    assignments.insert({syllabus.dueDate,syllabus.title,});

    //Iterating Through The Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Printing Out the Map
      printf("%.2f", it-> first);
      cout << " " << it-> second << endl;
    }

}


void RemoveAssignments()
{
    AssignmentDueDates syllabus;

     //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    map<double, string> assignments;


  //Asking What Assignment Title the User Chooses to Delete
   
   int numberChoice;

//Ask User What Number They Want to Delete
      cout << "What Assignment are you deleting?" << endl;
      cin >> numberChoice;

    cout << "------------------------" << endl;
      CurrentAssignments();

       //Iterator
    map<double,string>::iterator it = assignments.find(numberChoice);

//Delete's the Position 
    assignments.erase(numberChoice);

    cout << "------------------------" << endl;

    //Iterate Through Entire Map to Selected Pointer to the Specific Map
    for (map<double, string>::iterator it = assignments.begin(); it != assignments.end(); it++)
    {
      //Print out Pointer to Key and Value
     printf("%.2f", (*it).first);
     cout << (*it).second << endl; 
    }

}

double ChangeDate(double newDueDate)
{
    AssignmentDueDates syllabus;

    map<double, string> assignments;

     cout << "------------------------" << endl;
      cout << "What Assignment Date are you Changing?" << endl;
      cin >> syllabus.title;
        cout << "------------------------" << endl;

      double dueDate;
      cout << "Insert the new due date" << endl;
      cin >> syllabus.dueDate;
    
  AssignmentDueDates newDate;

  //printf("%.2f");

    return newDueDate;
}

int main() {

    //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    map<double, string> assignments;
    int choice;

    cout << "\nWelcome. This Program demonstrates manipulation of "
            "data" << endl;

    //Variable to Keep The Program going if user chooses so to do.
    static int repeat = 0;

    do
    {
    //Main Menu
    
    Choices();
    cin >> choice;

    //View Default Assignments

    if(choice == 1)
    {
      MapDefaultAssignments();
    }

    else if(choice == 2)
    {
      CurrentAssignments();
    }

    //Insert A New Assignment
    else if(choice == 3)
    {
      cout << "------------------------" << endl;
      cout << "Current Assignments" << endl;
      cout << "************************" << endl;
      CurrentAssignments();
      InsertNewAssignments();
    }

    //Delete An Assignment
    else if(choice == 4)
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
    else if(choice == 5)
    {

        double n;
      cout << "------------------------" << endl;
      //Insert Function Here For Current Assignments

      CurrentAssignments();
       
      ChangeDate(n);

    }

    //Exit Program
    else if(choice == 6)
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
