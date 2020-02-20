Author: Ethan Lengfeld - 9074020836

# Assignment 2: BookDB
The files in Assignment 2 consist of demo.cpp which is used as a test class to demo all methods defined
within BookDB.h and developed in BookDB.cpp.

## To Compile and Run Program
1. To run the program add all files to the any same directory.
2. Navigate to the directory location and type the command 'make'
3. This will create an executable called 'DemoBookDB'
4. Type 'DemoBookDB' in command line and the program will execute.
5. Enter commands
    Possible commands:
    - p 
    - a &lt;ID&gt; &lt;year&gt; &lt;rating&gt;
    - d &lt;ID>
    - u &lt;ID> <year> <rating>
    - c
    - f &lt;year>
    - s &lt;sort option>
    - q

## To Clean Program
To remove executable and any .o files run the command 'make clean'
Warning! This will delete the executable and will require rerunning 'make' to retest it

## Code Organization
BookDB.h defines all possible methods available to add, update, find, and delete
books in the book database. BookDB.cpp implements all functions defined in 
BookDB.h. Finally, demo.cpp will handle all commands given during program execution
this is done through the use of the main() function.
