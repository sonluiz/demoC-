#include<iostream>
#include<set>
#include<string>
using namespace std;

class Student {
private:
	int id;
	string name;
	int age;
public:
	void setid(int id) {
		this->id = id;
	}
	void setname(string name) {
		this->name = name;
	}
	void setage(int age) {
		this->age = age;
	}
	int getid() {
		return this->id;
	}
	string getname() {
		return this->name;

	}
	int getage() {
		return this->age;
	}
};
void nhapvaoSv(set<Student, greater<Student>> &myset) {
	int id;
	string name;
	int age;
	int n;
	cout << "nhap vao so sv: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap vao id: ";
		cin >> id;
		cout << "nhap vao ten: ";
		cin.ignore();
		getline(cin, name);
		cout << "nhap vao tuoi: ";
		cin >> age;
		Student s;
		s.setid(id);
		s.setname(name);
		s.setage(age);
		myset.insert(s);
	}

}
void xuatSV(set<Student, greater<Student>> myset) {
	cout << "danh sach sinh vien la: " << endl;
	set<Student>::iterator i;
//	for (auto i = myset.begin(); i != myset.end(); ++i)
//	{
//		cout << "id: " <<;
//	}
	for (Student student : myset) {
		cout << "id: " << student.getid() << " name: " << student.getname() << " age: " << student.getage();
	}
}

int main() {
	set<Student, greater<Student>> myset;
	nhapvaoSv(myset);
	xuatSV(myset);
	return 0;
}