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
class Raman:public Aman{
	public:
		int Batch;
		void dis(){
	    	cout<<"name:"<<name<<", roll_no :"<<roll_no<<", Batch"<<Batch<<endl;
    }
		
};
class man:public Aman,public Suman{
	public:
		int Assignment_no;
			void maan(){
			cout<<"name :"<<Aman::name<<",  roll_no :"<<roll_no<<",  marks :"<<marks<<",  Assignment_no:"<<Assignment_no<<endl;
		}
};
int main(){
	Aman a;
    a.name = "Aman";
    a.roll_no = 12345;
    a.display();

    Suman s;
    s.name = "Suman";
    s.marks = 97;
    s.sub();

    Raman r;
    r.name = "Raman";
    r.roll_no = 67890;
    r.Batch = 2;
    r.dis();

    man m;
    m.Aman::name = "Man";
    m.roll_no = 12;
    m.marks = 87;
    m.Assignment_no = 02;
    m.maan();
	 
}
