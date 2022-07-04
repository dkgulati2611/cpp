#include<bits/stdc++.h>
using namespace std;

class person
{
    char name[20], gender;
    int age;
    public:
    void getdata()
    {
        cout<<"Name: ";
        gets(name);
        cout<<"Age: ";
        cin>>age;
        cout<<"Gender: ";
        cin>>gender;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

class employee: public person
{
    char company[30];
    float salary;

    public:
    void getdata()
    {
        person::getdata();
        getchar();
        cout<<"Name of Company: ";
        gets(company);
        cout<<"Salary: Rs.";
        cin>>salary;
    }

    void display()
    {
        person::display();
        cout<<"Name of Company: "<<company<<endl;
        cout<<"Salary: Rs."<<salary<<endl;
    }
};

class programmer: public employee
{
    int number;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Number of programming languages known: ";
        cin>>number;
    }
    void display()
    {
        employee::display();
        cout<<"Number of programming languages known: "<<number;
    }
};

int main()
{
    programmer Pro;
    cout<<"Enter Details of the Programmer:- "<<endl;
    Pro.getdata();
    cout<<"\nDisplay details of the Programmer: "<<endl;
    Pro.display();
    return 0;
}