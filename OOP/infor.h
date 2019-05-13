#pragma once

#include <iostream>
namespace OOP {
	using namespace std;

	#ifndef INFOR_H
	#define INFOR_H 

	class infor { //데이터베이스에서 정보를 벡터형식으로 저장
	private:
		string name;
		string pw;
		string breed;
		string type;
		string age;
		string petname;


	public:
		//생성자

		infor() { }
		infor(string name, string pw, string breed, string type, string age, string petname) {
			setName(name);
			setPw(pw);
			setBreed(breed);
			setType(type);
			setAge(age);
			setPetname(petname);
		}
		//게터
		string getName() { return name; }
		string getPw() { return pw; }
		string getBreed() { return breed; }
		string getType() { return type; }
		string getAge() { return age; }
		string getPetname() { return petname; }

		//세터
		void setName(string _name) { name = _name; }
		void setPw(string _pw) { pw = _pw; }
		void setBreed(string _breed) { breed = _breed; }
		void setType(string _type) { type = _type; }
		void setAge(string _age) { age = _age; }
		void setPetname(string _petname) { petname = _petname; }


	};
	#endif
}
