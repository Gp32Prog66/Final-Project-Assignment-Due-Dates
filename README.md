# Final-Project-Assignment-Due-Dates
This is the Final Project For CIT-245 at CCAC. What my program does is that it inserts, deletes, and views assignments and the due dates. It can proove
to be useful when keeping track of all of the assignments. This Program helped me learn and understand the fundamentals of maps and how they manipulate and
organize data. 


## Main Menu
![](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Main-Menu.PNG)


## DefaultAssignments()
This function views the entire default assignments and their due dates. This also loads onto the <code> CurrentAssignments </code> Function. This could be useful if
the program doesn't currently have any assignments in the <code> CurrentAssignments function </code>.
![](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Load-Default-Assignments.PNG)

## CurrentAssignments()
Stores all of the Assignments that are loaded from the <code> DefaultAssignments() </code>, but also any other assignments that were inserted and/or deleted by the
user. This can be viewed any time at the main menu.

![Alt text](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Viewing-Assignments.PNG)

## InsertNewAssignments()
Allows the user to insert any new assignments to the program. It will ask what the assignment name is and what the due date will be for the assignment. The
insert method is key when it comes to inserting new data in a map. Lines 117-122 is what it takes to iterate through each key of a map and will print out the
results. 

![](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Inserting-Assignments.PNG)

## RemoveAssignments()
Allows the user to remove assignments. All that the user has to do is type that name of the assignment and it should remove the assignment. I had to assign the
pointer variable <code> it </code> to the find method for my program to search what the user has inputed for which assignment due date they wanted to delete. This 
is written on line 159. Then I would have to use the erase function erasing what was stored in the iterated variable <code> it </code>. The the function will 
iterate Through the entire map and will print out the updated list with the help of the pointer (<code> *it </code>) on each key and value.  
![](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Deleting-Assignments.PNG)

## ExitProgram()
This function simply exits the program and returns a <code> 0 </code> depending if you are compiling it in an IDE like Netbeans or Eclipse.
![](https://github.com/Gp32Prog66/Final-Project-Assignment-Due-Dates/blob/main/Screen%20Shots/Exit.PNG)

#### Citations
+ Walter Savitch Absolute C++ Sixth Addition  Pg 893-899

Walter Savitch does a pretty good job on laying down the basic template of the map with his book. This helped with getting to know about
maps and how they function. 

+ <https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/>

Geeks for Geeks is such a wonderful website to check out various coding concepts and ideas. I would recommend checking this
site out. This link gave me a basic understanding on how to insert data into maps in various ways. 

+ <https://www.guru99.com/cpp-map-stl.html#5> 

Huge help on understanding the delete function and how it could be used with user input in mind. This source does an excellent job
on explaining each line of code.

+ <https://stackoverflow.com/questions/62374433/alternatives-of-getline>

This was helpful for trying to figure out why the <code> getline </code> method wasn't working on lines 106. <code> Getline </code> kept skipping,
but thanks to this source, I was able to get it working. 
