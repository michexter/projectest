#include <iostream>
using namespace std;
struct Student {
    char name[36];
    int studentID;
    float marks;
};
int main() {
    Student st[4];
    for (int i=0; i<4; i++) {
        cout<<"Enter details for student " << i + 1 << ":\n";
        cout<<"Name: ";
        cin>>st[i].name;
        cout<<"StudentID: ";
        cin>>st[i].studentID;
        cout<<"Marks: ";
        cin>>st[i].marks;
        cout<<"\n";
    }
    cout<<"Student Information:\n";
    for (int i=0; i<4; i++){
        cout<<"Student "<<i+1<<":\n";
        cout<<"Name: "<<st[i].name<<"\n";
        cout<<"StudentID: "<<st[i].studentID <<"\n";
        cout<<"Marks: "<<st[i].marks<<"\n\n";
    }
    return 0;
}
nuko nuko umuchou utakoporora
