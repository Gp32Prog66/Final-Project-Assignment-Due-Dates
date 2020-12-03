#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include "AssignmentDueDates.cpp"

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

map<string, double> MapDefaultAssignments()
{
    AssignmentDueDates();

    //Iterator
    map<string, double>::iterator it;

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

void InsertNewAssignments()
{
    AssignmentDueDates assignment;
    //Map
    map<string, double> assignments;

    //Pointer
    int *ptr;

    //Iterator
    map<string, double>::iterator it;


    cout << "What is the Name of the Assignment?" << endl;
    getline(cin, assignment.title);


    double b;
      cout << "What is the assignment due date?" << endl;
      cin >> b;


    cout << "------------------------" << endl;
    //Inserting Assignments and Due Dates
    assignments.insert({"Introduction", 1.31});
    assignments.insert({"Coding Fundamentals", 2.25});
    assignments.insert({"Midterm Paper", 3.20});
    assignments.insert({"Queue Project", 3.30});
    assignments.insert({"Tree Project", 4.29});
    assignments.insert({"Final Paper", 5.03});
    assignments.insert({assignment.title,b});

    //Iterating Through The Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Printing Out the Map
      cout << it-> second << " " << it-> first << endl;
    }

}

//Swap Function. Will be Useful in the Change Due Date Function
void swap(int *pA, int *pB)
{
    int temp = *pA;
    pB = pA;
    *pB = temp;
}

void RemoveAssignments()
{
    AssignmentDueDates();

    map<string, double> assignments;

    //Iterator
    map<string, double>::iterator it;

    //Pointer
    int *ptr;

    cout << "------------------------" << endl;


    //Iterate Through Entire Map to Selected Pointer to the Specific Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Choice
    int choice;
      assignments.erase({1});
    }

    cout << "";
}


double ChangeDate(double newDueDate)
{
    AssignmentDueDates();

//Pointer
    int *ptr;

  AssignmentDueDates newDate;

  cout << "------------------------" << endl;

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

      InsertNewAssignments();

    }

    //Delete An Assignment
    else if(choice == 3)
    {
      int a;
      cout << "What Assignment are you deleting?" << endl;
      cin >> a;
      RemoveAssignments();
    }

    //Change Due Date to an Assignment
    else if(choice == 4)
    {
      double n;
      cout << "What Assignment Date are you Changing?" << endl;
      cin >> n;
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

    }while(repeat == 1);

    cout << "GoodBye" << endl;
    ExitProgram();


    return 0;
}
