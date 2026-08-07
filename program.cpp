#include <iostream>
using namespace std;
int choice;

class Student
{

private:
    int student_id;
    string student_name;
    string hostel_name;
    int room_no;
    int sr = 0;
    string complaint;
    string status = "Pending";

public:
    Student()
    {
        student_id = 0;
        student_name = "";
        hostel_name = "";
        room_no = 0;
    }

    void viewstatus()
    {
        cout << "\n------ Complaint Status ------" << endl;
        cout << "Student ID   : " << student_id << endl;
        cout << "Student Name : " << student_name << endl;
        cout << "Complaint    : " << complaint << endl;
        cout << "Status       : " << status << endl;
    }

    void studentmenu()
    {
        int ch;

        cout << "\n------ Student Menu ------" << endl;
        cout << "1. Register Complaint" << endl;
        cout << "2. Check Complaint Status" << endl;
        cout << "3. Back" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 1)
        {
            display();
        }
        else if (ch == 2)
        {
            viewstatus();
        }
    }

    void menu()
    {
        cout << "––––––––––––––––––Complain system––––––––––––––––––" << endl;
        cout << "1. Student" << endl;
        cout << "2. Admin" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice :";
        cin >> choice;
    }
    void display()
    {
        cout << "Enter Student ID :";
        cin >> student_id;

        cout << "Enter Student Name :";
        cin >> student_name;

        cout << "Enter Room no :";
        cin >> room_no;

        cout << "Enter Hostel Name :";
        cin >> hostel_name;

        cout << "Enter Your Complaint: ";
        cin >> complaint;

        cout << "––––––––––––––––––complaint registered successfully––––––––––––––––––" << endl;
    }

    void admin()
    {
        cout << "\n------ Complaint Details ------" << endl;
        cout << "Student Name : " << student_name << endl;
        cout << "Hostel Name : " << hostel_name << endl;
        cout << "Room No : " << room_no << endl;
        cout << "Complaint : " << complaint << endl;
        cout << "Status : " << status << endl;
    }

    void updatestatus()
    {
        cout << "Enter complaint status:\n";
        cout << "1. Pending\n";
        cout << "2. Completed\n";
        cout << "Choice: ";

        cin >> choice;

        if (choice == 1)
            status = "Pending";
        else if (choice == 2)
            status = "Completed";
        else
            cout << "Invalid choice\n";
    }

    void adminmenu()
    {
        admin();
        updatestatus();
        cout << "\nStatus Updated Successfully\n";
    }
};

int main()
{
    Student s1;

    while (true)
    {
        s1.menu();

        if (choice == 1)
        {
            s1.studentmenu();
        }
        else if (choice == 2)
        {
            s1.adminmenu();
        }
        else if (choice == 3)
        {
            cout << "Thank you\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }
}