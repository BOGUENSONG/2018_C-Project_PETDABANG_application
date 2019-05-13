#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "infor.h"
namespace OOP {
	using namespace std;
#ifndef SERVER_H
#define SERVER_H
	class server {
		infor inf;
		vector<class infor*> info;
		int mei;
		int youi;

	private:

		int server::getmyindex() { //인덱스 겟셋
			return mei;
		}
		int server::getyourindex() {
			return youi;
		}

		void server::setmyindex(int myi) {
			mei = myi;
		}

		void server::setyourindex(int youri) {
			youi = youri;
		}

		int server::findsame(string id) {
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					return -1; //중복되는 아이디를 찾으면 -1리턴
				}
			}
			return 1; //없으면 1리턴
		}

		void server::save() { //백터info에 엑셀 내용을 저장하는 함수
			fstream opFile;
			opFile.exceptions(fstream::badbit);
			try {
				opFile.open("DB.csv");
				if (!opFile)
					throw "error";
			}
			catch (const char * e)
			{
				cout << "error" << endl;
			}
			while (true) {
				string name1;
				getline(opFile, name1, ',');
				if (name1 == "")
					break;
				string pw1;
				getline(opFile, pw1, ',');
				string breed1;
				getline(opFile, breed1, ',');
				string type1;
				getline(opFile, type1, ',');
				string age1;
				getline(opFile, age1, ',');
				string petname1;
				getline(opFile, petname1, '\n');
				info.push_back(new infor(name1, pw1, breed1, type1, age1, petname1));
			}
		}

	public:
		vector<class infor*> server::getInfo() { //데이터베이스 겟셋
			return this->info;
		}

		void server::setInfo(vector<class infor*> Info) {
			info = Info;
		}

		int server::findIndex(string id) { //id를 입력받아 해당하는 인덱스 리턴
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					mei = i;
					return mei;
				}
			}
			return -1;
		}

		int server::logIn(string id, string pw) { //백터의 id와 pw부분을 비교한다 공통된 부분이있으면 자신의 배열번호를 리턴하고 그렇지않으면 -1을 리턴한다
			save();
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName() && pw == info[i]->getPw()) {
					mei = i;
					return mei;
				}
			}
			return -1;
		}

		int server::findRealindex(int index, string breed) { //상대인덱스는 같은종류DB중에 n번째 인덱스이다. 전체DB에서 실제 인덱스를 찾는 함수
			int j = 0;
			for (int i = 0; i < info.size(); i++) {
				if (breed == info[i]->getBreed()) {
					if (j == index) {
						return i;
					}
					j++;
				}
			}
			return -1; //없으면 -1리턴
		}

		string server::findbreed(string id) { //id pw를 제외한 데이터리턴
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					return info[i]->getBreed();
				}
			}
		}
		string server::findage(string id) {
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					return info[i]->getAge();
				}
			}
		}
		string server::findtype(string id) {
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					return info[i]->getType();
				}
			}
		}
		string server::findpetname(string id) {
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					return info[i]->getPetname();
				}
			}
		}

		int server::join(string name, string pw, string species, string type, string age, string petname) { //회원가입하는 함수, 중복된 아이디가 있으면 -1반환 그렇지않으면 1반환
			save();
			if (findsame(name) == -1) //같은 아이디가 존재하면 -1리턴
				return -1;
			ofstream outFile("DB.csv", ios_base::app);
			try {
				if (!outFile)
					throw "error";

			}
			catch (const char * e)
			{
				cout << "error" << endl;
			}
			outFile << name + ','; //사용자이름

			outFile << pw + ','; //사용자이름
			outFile << species + ','; //종
			outFile << type + ','; //품종
			outFile << age + ','; //나이
			outFile << petname + '\n'; //펫이름
			info.push_back(new infor(name, pw, species, type, age, petname));
			outFile.close();
			return 1;
		}

		void server::matching() {
			save();
		}
		void server::check() { //쪽지를 확인하는 함수 
			cout << "쪽지를 확인합니다." << endl;
			string cheting;
			cheting = info[mei]->getName() + ".txt";
			fstream opFile;
			opFile.open(cheting);
			while (true) {
				string abc;
				getline(opFile, abc, '\n');
				if (abc == "")
					break;
				cout << abc << endl;
			}

		}

	};
#endif
}

