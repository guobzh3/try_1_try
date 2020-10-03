#include<iostream>
#include<string>
using namespace std;
class Person{
public:
	int age;
	string name;
	string male;
	Person(int a,string n,string m){
	age = a;
	name = n;
	male = m;
	}
	Person* return_this(){
		return this;
	}
	void print(){
		cout << "age is "<< this->age <<endl;
		cout << "name is "<< this->name <<endl;
		cout << "male is "<< this->male << endl;
	}
};
class Student:public Person
{
public:
	string subject;
	Student(int _age,string _name,string _male,string _subject):Person(_age,_name,_male)
	{
		subject = _subject;
	}
	//返回的是一个对象的引用，引用就是一个对象的别名嘛（相当于返回了一个已经存在的对象）
	Student& add_age(int _a){
		age += _a;
	}
	Student& sub_age(int _b){
		age -= _b;
	}
	//age name male 变量是继承来的，只能在“初始化成员列表”中，用父类的构造函数来初始化	
};
int main(){
	Student student(12,"gbz","M","computer and science");
	student.add_age(18).sub_age(2).add_age(1);
	cout <<student.age;
/*	Person person(3,"dlg","F");
	person.print();
	Student student(12,"gbz","M","computer and science");
	student.print();
*/
}

//那不就类似于 <<(ostream,p1).<<(ostream,p2).<<(ostream,p3)  
//                         