#include<iostream>
using namespace std;


class student{   //bydefault members are private
    public:     //this func help to access outside
    string name;
    int age;
    bool gender;


    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }
};
int main()
{
    // student a;
    // a.name = "urvi";
    // a.age = 20;
    // a.gender =1;
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"age = ";
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    
    


    return 0;
}