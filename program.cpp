#include<iostream>
using namespace std;
int choice;

class Student {

    private:
      int student_id;
      string student_name;
      string hostel_name;
      int room_no;
      int sr = 0;
      string complaint;
      string status = "pending";
    public:
    Student()
    {
     student_id = 0;
     student_name = "";
     hostel_name = "";
     room_no = 0;
    }  

    void menu(){
        cout<<"1. Student"<<endl;
        cout<<"2. Admin"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
    }
    void display()
    {
      cout<<"Enter Student ID :";
      cin>>student_id;

      cout<<"Enter Student Name :";
      cin>>student_name;

      cout<<"Enter Room no :";
       cin>>room_no;

      cout<<"Enter Hostel Name :";
      cin>>hostel_name;

      cout<<"Enter Your Complaint: ";
      cin>>complaint;
    }


    void admin(){
        cout<<student_name<<endl;
        cout<<hostel_name<<endl;
        cout<<room_no<<endl;
        cout<<complaint<<endl;
        cout<<status<<endl;
    }




      



};

int main(){
    Student s1;
    

    while (true)
    {
        s1.menu();

        if (choice == 1)
        {
            s1.display();
            
        }

        if (choice == 2)
        {
            s1.admin();
        }
        else if(choice==3){
            cout<<"Exit"<<endl;
            break;
        }
       


    }
    
}