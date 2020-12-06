#include <iostream>
#include <list>
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

//Pointer Variable
    int *ptr;

    //Map 
    map<double, string>assignments;

    //Iterator
    map<double, string>::iterator it;

private:
    

};

/*
for(int a = 0; a <= assignment.size(); a++)
{
 cout << a + ". " << endl;
}

*/
