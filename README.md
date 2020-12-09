# Final-Project-Assignment-Due-Dates
This is the Final Project For CIT-245 at CCAC. What my program does is that it inserts, deletes, and views assignments and the due dates. It can proove
to be useful when keeping track of all of the assignments. This Program helped me learn and understand the fundamentals of maps and how they manipulate and
organize data. 

## Main Menu
![Alt text](![Alt text](Screen Shots/Main-Menu.png))


## DefaultAssignments()
This function views the entire default assignments and their due dates. This also loads onto the CurrentAssignments Function. This could be useful if
the program doesn't currently have any assignments in the CurrentAssignments function.
![](Screen Shots/Load-Default-Assignments.png)

## CurrentAssignments()
Stores all of the Assignments that are loaded from the DefaultAssignments(), but also any other assignments that were inserted and/or deleted by the
user. This can be viewed any time at the main menu. 
![Alt text](Screen Shots/View-Assignments.png)

## InsertNewAssignments()
Allows the user to insert any new assignments to the program. It will ask what the assignment name is and what the due date will be for the assignment. The
insert method is key when it comes to inserting new data in a map. Lines 117-122 is what it takes to iterate through each key of a map and will print out the
results. 
![Alt text](Screen Shots/Inserting-Assignments.png)

## RemoveAssignments()
Allows the user to remove assignments. All that the user has to do is type that name of the assignment and it should remove the assignment. I had to assign the
pointer variable <code> it </code> to the find method for my program to search what the user has inputed for which assignment due date they wanted to delete. This 
is written on line 159. Then I would have to use the erase function erasing what was stored in the iterated variable <code> it </code>. The the function will 
iterate Through the entire map and will print out the updated list with the help of the pointer (<code> *it </code>) on each key and value.  
![Alt text](Screen Shots/Deleting-Assignments.png)

## ExitProgram()
This function simply exits the program and returns a 0 depending if you are compiling it in an IDE like Netbeans or Eclipse.
![Alt text](Screen Shots/Exit.png)

#### Citations

+ <https://www.geeksforgeeks.org/sorting-a-map-by-value-in-c-stl/>

+ Walter Savitch Absolute C++ Sixth Addition  Pg 893-899

+ <https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/>

+ <https://www.guru99.com/cpp-map-stl.html#5>

+ <https://stackoverflow.com/questions/62374433/alternatives-of-getline>
