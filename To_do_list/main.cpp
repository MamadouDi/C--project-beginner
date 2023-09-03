//List of tasks
// set deadlines for some tasks
// If a deadline for a task has passed, imput the user to remove it or to leave it there.
// If removed, display the updated list
// Input the user if he wish to add another task
//If yes display the updated list.



# include <iostream>
# include <list>
#include <ctime>
#include <iterator>
#include <chrono>



using namespace std;
using namespace std::chrono;


int main(){
    
    // Create an empty List
    list<string> My_task;
    // Add tasks in the list
    // push_front() - inserts an element to the beginning of the list
    // push_back() - adds an element to the end of the list
    My_task.push_back("Research Paper");
    My_task.push_back("MGMT 260 presentation");
    My_task.push_back("MGMT 201 Presentation");
    My_task.push_back("SOC 101 Final Exam");
    My_task.push_back("MGMT 260 Final Exam");
    My_task.push_back("MGMT 201 Final Exam");
   
    for (string x : My_task)
        cout << x << "\n";
        
    // set for due dates for each task
    
    // Set the desired due date for research paper (August 25)


 


   //struct tm
 //{
       //           int tm_sec; // seconds of minutes from 0 to 61
        //          int tm_min; // minutes of hour from 0 to 59
         //         int tm_hour; // hours of day from 0 to 24
         //         int tm_mday; // day of month from 1 to 31
         //         int tm_mon; // month of year from 0 to 11
          //        int tm_year; // year since 1900
          //        int tm_wday; // days since sunday
           //       int tm_yday; // days since January 1st
            //      int tm_isdst; // hours of daylight savings time


struct tm due_date; // struct tm returns a pointer to a tm structure
due_date.tm_year = 2023 - 1900; // Year (current year - 1900)
due_date.tm_mon = 8-1;            // /* month, range 0 to 11  
due_date.tm_mday = 25;           // Day of the month
due_date.tm_hour = 22;           // Hour
due_date.tm_min = 59;            // Minute
due_date.tm_sec = 59;            // Second
due_date.tm_isdst = 0;          // DST not in effect
// Convert the due date struct to time_t

// Convert the due date struct to time_t
 mktime(&due_date);
// Print the formatted due date
char rt[48]; // The number of character to be stored in the variable.
strftime(rt, sizeof(rt), "%c", &due_date);

// Get an element from a list
list<string>::iterator it = My_task.begin();
cout << "\nThe due date for the " << *it << " was " << rt << endl;


// Set desired due date for MGMT 260 presentation
struct tm due_time;
due_time.tm_year = 2023 - 1900; // Year (current year - 1900)
due_time.tm_mon = 8-1;            // /* month, range 0 to 11  
due_time.tm_mday = 28;           // Day of the month
due_time.tm_hour = 9;           // Hour
due_time.tm_min = 59;            // Minute
due_time.tm_sec = 59;            // Second
due_time.tm_isdst = 0;          // DST not in effect

++ it;





 mktime(&due_time);
// Print the formatted due date
char mt[48];
strftime(mt, sizeof(mt), "%c", &due_time);  // Used to format date and time in specific format.

cout << "\nThe due date for the " << *it << " is " << mt << endl;

// Set desired due date for SOC 101 final exam



struct tm due_t;
due_t.tm_year = 2023 - 1900; // Year (current year - 1900)
due_t.tm_mon = 9-1;            // /* month, range 0 to 11  
due_t.tm_mday = 8;           // Day of the month
due_t.tm_hour = 9;           // Hour
due_t.tm_min = 59;            // Minute
due_t.tm_sec = 59;            // Second
due_t.tm_isdst = 0;          // DST not in effect



++ it;
++ it;



 mktime(&due_t);
// Print the formatted due date
char st[48];
strftime(st, sizeof(st), "%c", &due_t); // %c	Locale’s appropriate date and time representation.
                                            // Example: Mon Sep 30 07:06:05 2013

cout << "\nThe due date for the " << *it << " is " << st << endl;


 
 

// If a task from the list meet it's due date ask the computer to make
// a signal for it and imput the user if he wish to remove("Y/N), if yes print
 // print out the new list without that removed task

// convert the due date to a time point:
system_clock::time_point due_date_time = system_clock::from_time_t(mktime(&due_date)); /******
 Class template std::chrono::time_point represents a point in time. 
  * It is implemented as if it stores a value of type Duration indicating the time interval from the start of the Clock's epoch.***/

system_clock::time_point current_time = system_clock::now();  //system_clock-It is the current time according to the system (regular clock which we see on the toolbar of the computer). 
// It is written as- std::chrono::system_clock

if (current_time > due_date_time) {
     cout << "\nThe due date for the Research Paper has passed: Do you wish to remove it (yes / no)? ";
    string response;
    cin>>response;
        for (char &c : response) {
        c = std::tolower(c);
    }  
 
        if (response == "yes") {
        My_task.remove("Research Paper");
// Print updated task list
cout<<"\nAfter removing Research paper, here is the new list: \n";
for (auto itr = My_task.begin();
    itr != My_task.end(); itr++) {
        cout << *itr << "\n";
    } 
    
        }
        else {
    cout<<"The list will be updated without any task being removed"<<endl;
        }
    cout<<"\n Do you wish to add a task from the list ('yes' or 'No') ?: ";
    string add;
    cin>>add;
     

    if (add == "yes"){
        while(true) {
        cout<<"Which tasks do you wish to add: ";
        string add2;
        getline(cin, add2);
        
        My_task.push_back(add2);
        
        
        
        if (add2 == "done"){ 
            break;
        
        }
        
        }
    }
         else{
        cout<<"continue"<<endl;
    }
    cout<<"the updated list: \n" ;
    for (auto itr = My_task.begin();
    itr != My_task.end(); itr++) {
        cout << *itr << "\n";
    }
    } 
    
    



    
    



/*****
 * for ( range_declaration : range_expression ) 
    loop_statement

Parameters :
range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction.

range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list.

loop_statement : 
any statement, typically a compound statement, which
is the body of the loop.
 *****/
 
 

    
   
    
return 0;

    
    

}