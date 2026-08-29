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

    while (true)
    {
        cout << "\n-------------------------------- Student Menu --------------------------------\n"
             << endl;
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
        else if (ch == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }
}

    void menu()
    {
        cout << "\n--------------------------------Hostel Complaint Management System----------------------------\n"
             << endl;
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
        cin.ignore();
        getline(cin, complaint);

        cout << "\n--------------------------------complaint registered successfully--------------------------------\n"
             << endl;
    }

    void admin()
    {
        cout << "\n-------------------------------- Complaint Details --------------------------------\n"
             << endl;
        cout << "Student Name : " << student_name << endl;
        cout << "Student ID : " << student_id << endl;
        cout << "Hostel Name : " << hostel_name << endl;
        cout << "Room No : " << room_no << endl;
        cout << "Complaint : " << complaint << endl;
        cout << "Status : " << status << endl;
    }
    void updatestatus()
    {
        int ch;

        cout << "\nEnter complaint status:\n";
        cout << "1. Pending\n";
        cout << "2. Completed\n";
        cout << "Choice: ";

        cin >> ch;

        if (ch == 1)
        {
            status = "Pending";
        }
        else if (ch == 2)
        {
            status = "Completed";
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }
void adminmenu()
{
    int ch;

    while (true)
    {
        cout << "\n-------------------------------- Admin Menu --------------------------------\n"
             << endl;
        cout << "1. See Complaint" << endl;
        cout << "2. Update Status" << endl;
        cout << "3. Back" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 1)
        {
            admin();
        }
        else if (ch == 2)
        {
            updatestatus();
        }
        else if (ch == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }
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
            cout << "\n--------------------------------Thank you-------------------------------\n";
            break;
        }
        else
        {
            cout <<"invalid";
        }
    }
} 