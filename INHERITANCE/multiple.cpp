#include<iostream>
using namespace std;
class parent{
	public:
		string name;
		int mobile_no;
		int money;
		void display(){
			cout<<"name :"<<name<<endl;
			cout<<"mobile_no :"<<mobile_no<<endl;
			cout<<"money :"<<money<<endl;
		}
};
class student{
	public:
		string subject;
		int marks;
		int PRN;
		void stu(){
			cout<<"subject :"<<subject<<endl;
			cout<<"marks :"<<marks<<endl;
			cout<<"PRN :"<<PRN<<endl;
		}
};
class school:public parent,public student{
	public:
	    int Batch;
	    int Admission_no;
	    void sch(){
	    	cout<<"Batch :"<<Batch<<",Admission_no :"<<Admission_no<<endl;
	    	cout<<"name :"<<name<<endl;
			cout<<"mobile_no :"<<mobile_no<<endl;
			cout<<"money :"<<money<<endl;
			cout<<"subject :"<<subject<<endl;
			cout<<"marks :"<<marks<<endl;
			cout<<"PRN :"<<PRN<<endl;
		}
};
int main(){
	school s;
	s.Batch=2;
	s.Admission_no=202501;
	s.marks=90;
	s.mobile_no=942378222;
	s.money=25000;
	s.name="Aman";
	s.PRN=12345;
	s.subject="Maths";
	s.sch();
}



output:

Batch :2,Admission_no :202501
name :Aman
mobile_no :942378222
money :25000
subject :Maths
marks :90
PRN :12345
