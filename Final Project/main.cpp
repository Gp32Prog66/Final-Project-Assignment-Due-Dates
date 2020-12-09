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

map<double, string> assignments; //Make Global

 AssignmentDueDates syllabus; //Global

  
    map<double, string>::iterator it; //Global Iterator 

//User Choices
void Choices()
{
  cout << "What would you like to do? " << endl;

  cout << "1. Load Default Assignments?" << endl;
  cout << "2. View Current Assignments?" << endl;
  cout << "3. Insert New Assignments?" << endl;
  cout << "4. Remove Assignments?" << endl;
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

    //Iterator
    map<double,string>::iterator it;

    /*
    1. This Part of the Code was templated from Walter Savitch's
    Book Absolute C++ Sixth edition on Page 898 (Program Using the
                                                 map Template Class)
    */

    //Setting The Map
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
      printf("%.2f", it-> first); //Format Date to show Date Properly with printf()
      cout << " " << it-> second << endl;
    }
   
}
/*End of Reference 1*/

//Stores up to date Current Assignments From What the User Chooses
void CurrentAssignments()
{
  //For Loop To Only Print Out The Assignments
  for (const auto& i : assignments)
  //Ask the map for its key and iterate each key
  {
    printf("%.2f", i.first);
    cout << " " << i.second << endl;
  }

}


void InsertNewAssignments()
{
  //Geeks For Geeks was very helpful for getting a partial understanding of the insert 
  //function
  //https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

 
    //Ask For Assignment Name
    cout << "What is the Name of the Assignment?" << endl;
    getline(cin >> ws, syllabus.title); //Alternative to GetLine https://stackoverflow.com/questions/62374433/alternatives-of-getline

    //Ask for Due Date
      cout << "What is the assignment due date? (Ex. 1.01)"  << endl;
      cin >> syllabus.dueDate;

    cout << "------------------------" << endl;
    //Inserting Assignments and Due Dates

    assignments.insert({syllabus.dueDate,syllabus.title,});

  for (const auto& i : assignments)
  //Ask the map for its key and iterate each key
  {
    printf("%.2f", i.first); //PrintF Function for formating
    cout << " " << i.second << endl;
  }

    //Iterating Through The Map
    /*
    for (it = assignments.begin(); it != assignments.end(); it++)
    
    
    {
      //Printing Out the Map
      printf("%.2f", it-> first);
      cout << " " << it-> second << endl;
    }
  */
}


void RemoveAssignments()
{

     //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    //map<double, string> assignments;
   

//Ask User What Number They Want to Delete
      cout << "What Assignment are you deleting? Enter by Due Date (Ex 1.01)" << endl;
      cin >> syllabus.dueDate;

    cout << "------------------------" << endl;
     

//Deleting data from a map was used partially from the site below the comment
//below for the iterator and the find function
//https://www.guru99.com/cpp-map-stl.html#5 
       //Iterator

 //Using the Find Method to search for what the user has inputed
  it = assignments.find(syllabus.dueDate);

//Find The Choice Using the Iterator
assignments.erase(it);

//Delete's the Position 
  
    cout << "------------------------" << endl;

    //Iterate Through Entire Map to Selected Pointer to the Specific Map
    for (it = assignments.begin(); it != assignments.end(); it++)
    {
      //Print out Pointer to Key and Value
     printf("%.2f", (*it).first); //Format Date to show Date Properly with printf()
     cout << " " << (*it).second << endl; 
    }
    //End of Reference

}


int main() {

    //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
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
      cout << "------------------------" << endl;
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
