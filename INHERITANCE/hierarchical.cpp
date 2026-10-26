#include<iostream>
using namespace std;
class person{
	public:
	    string name;
};
class Aman:public person{
	public:
		int roll_no;
	    void display(){
	    	cout<<"name :"<<name<<",  roll_no :"<<roll_no<<endl;
    }
};
class Suman:public person{
	public:
		int marks;
		void sub(){
			cout<<"name :"<<name<<",  marks :"<<marks<<endl;
		}
};
int main(){
	Aman a;
	a.name="Aman";
	a.roll_no=12345;
	a.display();
	Suman s;
	s.name="Suman";
	s.marks=97;
	s.sub();
}
