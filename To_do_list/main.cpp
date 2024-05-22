#include <iostream>
#include <list>
#include <ctime>
#include <iterator>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    // Create an empty list to store tasks
    list<string> My_task;

    // Add tasks to the list
    My_task.push_back("Research Paper");
    My_task.push_back("MGMT 260 presentation");
    My_task.push_back("MGMT 201 Presentation");
    My_task.push_back("SOC 101 Final Exam");
    My_task.push_back("MGMT 260 Final Exam");
    My_task.push_back("MGMT 201 Final Exam");

    // Display the tasks
    for (const string &task : My_task)
        cout << task << "\n";

    // Set the due date for "Research Paper"
    struct tm due_date;
    due_date.tm_year = 2023 - 1900; // Year (2023 - 1900)
    due_date.tm_mon = 8 - 1;        // Month (August - 1)
    due_date.tm_mday = 25;          // Day of the month
    due_date.tm_hour = 22;          // Hour
    due_date.tm_min = 59;           // Minute
    due_date.tm_sec = 59;           // Second
    due_date.tm_isdst = 0;          // Daylight saving time not in effect

    // Convert the due date struct to time_t
    mktime(&due_date);

    // Print the formatted due date for "Research Paper"
    char rt[48];
    strftime(rt, sizeof(rt), "%c", &due_date);

    // Get an iterator to the first task in the list
    list<string>::iterator it = My_task.begin();
    cout << "\nThe due date for the " << *it << " was " << rt << endl;

    // Set the due date for "MGMT 260 presentation"
    struct tm due_time;
    due_time.tm_year = 2023 - 1900; // Year (2023 - 1900)
    due_time.tm_mon = 8 - 1;        // Month (August - 1)
    due_time.tm_mday = 28;          // Day of the month
    due_time.tm_hour = 9;           // Hour
    due_time.tm_min = 59;           // Minute
    due_time.tm_sec = 59;           // Second
    due_time.tm_isdst = 0;          // Daylight saving time not in effect

    ++it;  // Move the iterator to the next task

    // Convert the due time struct to time_t
    mktime(&due_time);

    // Print the formatted due date for "MGMT 260 presentation"
    char mt[48];
    strftime(mt, sizeof(mt), "%c", &due_time);
    cout << "\nThe due date for the " << *it << " is " << mt << endl;

    // Set the due date for "SOC 101 Final Exam"
    struct tm due_t;
    due_t.tm_year = 2023 - 1900; // Year (2023 - 1900)
    due_t.tm_mon = 9 - 1;        // Month (September - 1)
    due_t.tm_mday = 8;           // Day of the month
    due_t.tm_hour = 9;           // Hour
    due_t.tm_min = 59;           // Minute
    due_t.tm_sec = 59;           // Second
    due_t.tm_isdst = 0;          // Daylight saving time not in effect

    ++it;  // Move the iterator to the next task
    ++it;  // Move the iterator to the next task

    // Convert the due time struct to time_t
    mktime(&due_t);

    // Print the formatted due date for "SOC 101 Final Exam"
    char st[48];
    strftime(st, sizeof(st), "%c", &due_t);
    cout << "\nThe due date for the " << *it << " is " << st << endl;

    // Check if the due date for "Research Paper" has passed
    system_clock::time_point due_date_time = system_clock::from_time_t(mktime(&due_date));
    system_clock::time_point current_time = system_clock::now();

    if (current_time > due_date_time) {
        // If due date has passed, prompt the user to remove the task
        cout << "\nThe due date for the Research Paper has passed: Do you wish to remove it (yes / no)? ";
        string response;
        cin >> response;

        // Convert response to lowercase
        for (char &c : response) {
            c = tolower(c);
        }

        if (response == "yes") {
            // Remove the task from the list
            My_task.remove("Research Paper");

            // Print updated task list
            cout << "\nAfter removing Research Paper, here is the new list: \n";
            for (const auto &task : My_task) {
                cout << task << "\n";
            }
        } else {
            cout << "The list will be updated without any task being removed" << endl;
        }

        // Prompt the user to add a new task
        cout << "\nDo you wish to add a task to the list ('yes' or 'no')? ";
        string add;
        cin >> add;

        if (add == "yes") {
            // Loop to allow multiple tasks to be added
            while (true) {
                cout << "Which task do you wish to add: ";
                string add2;
                cin.ignore(); // Clear the input buffer
                getline(cin, add2);

                if (add2 == "done") {
                    break;
                }

                My_task.push_back(add2);
            }
        } else {
            cout << "Continue" << endl;
        }

        // Print the updated list
        cout << "The updated list: \n";
        for (const auto &task : My_task) {
            cout << task << "\n";
        }
    }

    return 0;
}
