#include<iostream>
using namespace std;
int main(){
	int Num=10;
    cout<< Num<<endl;//this displays the the value of n
    cout<<&Num<<endl;//this displays the address of num
    int *ptr=&Num;
    cout<<ptr<<endl;//this displays the address of num but it's the pointer that displays it
	cout<<*ptr<<endl;//thi displays the value in the address of ptr
	*ptr=5;//this changes the value assigned in the memory 
	cout<<*ptr<<endl;//this displays the changed value of the ptr
	cout<<Num<<endl;//this displays the value of *ptr bcz of line no7
	
	int v;
	int *ptr2=&v;
	*ptr2=7;
	cout<<"v="<<v<<endl;
	
	return 0;
}
