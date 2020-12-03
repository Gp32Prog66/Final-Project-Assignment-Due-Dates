#include <iostream>
#include <map>
#include <string>
#include <vector>



using namespace std;

class AssignmentDueDates
{
public:

//Assignment Title
string title;
int day, month = 0;

//Due Date set to Default
double dueDate = 1.01;

private:

     //The Assignments Have A Title and a Due Date, which will be a
    //double in our case
    map<string, double> assignments;

    //Iterator
    map<string, double>::iterator it;


};

void Choices()
{
  cout << "1. View Default Assignments?" << endl;
  cout << "2. Insert New Assignments?" << endl;
  cout << "3. Remove Assignments?" << endl;
  cout << "4. ChangeDate?" << endl;
  cout << "5. Exit?" << endl;
}

void ExitProgram()
{
    cout << "End of Demonstration" << endl;
      //Terminates the Program and Returns 1
      exit(0);
}
