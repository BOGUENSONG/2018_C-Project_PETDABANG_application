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

		int server::getmyindex() { //�ε��� �ټ�
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
					return -1; //�ߺ��Ǵ� ���̵� ã���� -1����
				}
			}
			return 1; //������ 1����
		}

		void server::save() { //����info�� ���� ������ �����ϴ� �Լ�
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
		vector<class infor*> server::getInfo() { //�����ͺ��̽� �ټ�
			return this->info;
		}

		void server::setInfo(vector<class infor*> Info) {
			info = Info;
		}

		int server::findIndex(string id) { //id�� �Է¹޾� �ش��ϴ� �ε��� ����
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName()) {
					mei = i;
					return mei;
				}
			}
			return -1;
		}

		int server::logIn(string id, string pw) { //������ id�� pw�κ��� ���Ѵ� ����� �κ��������� �ڽ��� �迭��ȣ�� �����ϰ� �׷��������� -1�� �����Ѵ�
			save();
			for (int i = 0; i < info.size(); i++) {
				if (id == info[i]->getName() && pw == info[i]->getPw()) {
					mei = i;
					return mei;
				}
			}
			return -1;
		}

		int server::findRealindex(int index, string breed) { //����ε����� ��������DB�߿� n��° �ε����̴�. ��üDB���� ���� �ε����� ã�� �Լ�
			int j = 0;
			for (int i = 0; i < info.size(); i++) {
				if (breed == info[i]->getBreed()) {
					if (j == index) {
						return i;
					}
					j++;
				}
			}
			return -1; //������ -1����
		}

		string server::findbreed(string id) { //id pw�� ������ �����͸���
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

		int server::join(string name, string pw, string species, string type, string age, string petname) { //ȸ�������ϴ� �Լ�, �ߺ��� ���̵� ������ -1��ȯ �׷��������� 1��ȯ
			save();
			if (findsame(name) == -1) //���� ���̵� �����ϸ� -1����
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
			outFile << name + ','; //������̸�

			outFile << pw + ','; //������̸�
			outFile << species + ','; //��
			outFile << type + ','; //ǰ��
			outFile << age + ','; //����
			outFile << petname + '\n'; //���̸�
			info.push_back(new infor(name, pw, species, type, age, petname));
			outFile.close();
			return 1;
		}

		void server::matching() {
			save();
		}
		void server::check() { //������ Ȯ���ϴ� �Լ� 
			cout << "������ Ȯ���մϴ�." << endl;
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

