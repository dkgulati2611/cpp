#include<iostream>
using namespace std;


class student{   //bydefault members are private
    string name;
    public:     //this func help to access outside
    int age;
    bool gender;
    void setname(string s){
        name =s;
    }
    void getname(){
        cout<<name<<endl;
    }
    student(){
        cout<<"default constructor"<<endl;
    } //default constructor
    student (string s,int a, bool g){
        cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }//parmaterised constructor

    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"destructor"<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if (name == a.name && age == a.age && gender ==a.gender){
            return true;
        }
        return false;
    }
};
int main()
{
    // // student a;
    // // a.name = "urvi";
    // // a.age = 20;
    // // a.gender =1;
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"age = ";
    //     cin>>arr[i].age;
    //     cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }
    
    student a("urvi",20,1);
    // a.printInfo();
    student b;
    student c = a;

    if(c == a){
        cout<<"Same"<<endl;
    }
    else {
        cout<<"not same"<<endl;
    }
    return 0;
}