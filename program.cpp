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
        cout<<"1. student"<<endl
            <<"2. Admin"<<endl;
        cin>>choice;
    }
    void display()
    {
      cout<<"Enter Student ID :"<<endl;
      cin>>student_id;

      cout<<"Enter Student Name :"<<endl;
      cin>>student_name;

      cout<<"Enter Room no :"<<endl;
       cin>>room_no;

      cout<<"Enter Hostel Name :"<<endl;
      cin>>hostel_name;

      cout<<"Enter Your Complaint: "<<endl;
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
        else{
            s1.admin();
        }
        

    }
    
}