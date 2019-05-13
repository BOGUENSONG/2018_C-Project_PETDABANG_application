#pragma once

#include <iostream>
namespace OOP {
	using namespace std;

	#ifndef INFOR_H
	#define INFOR_H 

	class infor { //�����ͺ��̽����� ������ ������������ ����
	private:
		string name;
		string pw;
		string breed;
		string type;
		string age;
		string petname;


	public:
		//������

		infor() { }
		infor(string name, string pw, string breed, string type, string age, string petname) {
			setName(name);
			setPw(pw);
			setBreed(breed);
			setType(type);
			setAge(age);
			setPetname(petname);
		}
		//����
		string getName() { return name; }
		string getPw() { return pw; }
		string getBreed() { return breed; }
		string getType() { return type; }
		string getAge() { return age; }
		string getPetname() { return petname; }

		//����
		void setName(string _name) { name = _name; }
		void setPw(string _pw) { pw = _pw; }
		void setBreed(string _breed) { breed = _breed; }
		void setType(string _type) { type = _type; }
		void setAge(string _age) { age = _age; }
		void setPetname(string _petname) { petname = _petname; }


	};
	#endif
}
