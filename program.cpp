#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int choice;

class Student
{
private:
    int student_id = 0;
    string student_name;
    string hostel_name;
    int room_no = 0;
    string complaint;
    string status = "Pending";

    void showComplaintForm(ostream& out)
    {
        out << "==================================================\n";
        out << "           HOSTEL COMPLAINT FORM\n";
        out << "==================================================\n";
        out << "Student ID   : " << student_id << '\n';
        out << "Student Name : " << student_name << '\n';
        out << "Hostel Name  : " << hostel_name << '\n';
        out << "Room Number  : " << room_no << '\n';
        out << "Complaint    : " << complaint << '\n';
        out << "Status       : " << status << '\n';
        out << "==================================================\n\n";
    }

    bool saveComplaint()
    {
        // Append a newly confirmed complaint to the file.
        ofstream file("complaints.txt", ios::app);

        if (!file)
        {
            cout << "Could not open complaints.txt. The complaint was not saved.\n";
            return false;
        }

        showComplaintForm(file);
        return true;
    }

    void saveUpdatedComplaint()
    {
        // This program stores one complaint, so replace the old form
        // with the same complaint and its updated status.
        ofstream file("complaints.txt", ios::trunc);

        if (!file)
        {
            cout << "Could not update complaints.txt.\n";
            return;
        }

        showComplaintForm(file);
        cout << "Complaint status saved to complaints.txt.\n";
    }

public:
    void viewstatus()
    {
        cout << "\n------ Complaint Status ------\n";
        cout << "Student ID   : " << student_id << '\n';
        cout << "Student Name : " << student_name << '\n';
        cout << "Complaint    : " << complaint << '\n';
        cout << "Status       : " << status << '\n';
    }

    void display()
    {
        while (true)
        {
            cout << "\nEnter Student ID: ";
            cin >> student_id;

            cout << "Enter Student Name: ";
            cin >> ws;
            getline(cin, student_name);

            cout << "Enter Room Number: ";
            cin >> room_no;

            cout << "Enter Hostel Name: ";
            cin >> ws;
            getline(cin, hostel_name);

            cout << "Enter Your Complaint: ";
            getline(cin, complaint);

            cout << "\n----------- Preview Complaint Form -----------\n";
            showComplaintForm(cout);

            int confirm;
            cout << "1. Yes, confirm and save\n";
            cout << "2. No, edit the information\n";
            cout << "Choice: ";
            cin >> confirm;

            if (confirm == 1)
            {
                if (saveComplaint())
                {
                    cout << "\nComplaint confirmed and saved to complaints.txt.\n";
                }
                break;
            }
            else if (confirm == 2)
            {
                cout << "\nPlease enter your information again.\n";
            }
            else
            {
                cout << "Invalid choice. Please review the preview again.\n";
            }
        }
    }

    void studentmenu()
    {
        int ch;

        while (true)
        {
            cout << "\n---------------- Student Menu ----------------\n";
            cout << "1. Register Complaint\n";
            cout << "2. Check Complaint Status\n";
            cout << "3. Back\n";
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
                cout << "Invalid choice!\n";
            }
        }
    }

    void menu()
    {
        cout << "\n--------- Hostel Complaint Management System ---------\n";
        cout << "1. Student\n";
        cout << "2. Admin\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    void admin()
    {
        cout << "\n--------- Complaint Details ---------\n";
        cout << "Student Name : " << student_name << '\n';
        cout << "Student ID   : " << student_id << '\n';
        cout << "Hostel Name  : " << hostel_name << '\n';
        cout << "Room Number  : " << room_no << '\n';
        cout << "Complaint    : " << complaint << '\n';
        cout << "Status       : " << status << '\n';
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
            saveUpdatedComplaint();
        }
        else if (ch == 2)
        {
            status = "Completed";
            saveUpdatedComplaint();
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
            cout << "\n---------------- Admin Menu ----------------\n";
            cout << "1. See Complaint\n";
            cout << "2. Update Status\n";
            cout << "3. Back\n";
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
                cout << "Invalid choice!\n";
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
            cout << "\nThank you.\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
