#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// Bài 1
#if 0
class Point_2D {
private:
	float x, y;
public:
	Point_2D(float x1, float y1) : x(x1), y(y1) {}
	
	float distance(const Point_2D &ptr) const {
		return sqrt(pow((x - ptr.x), 2) + pow((y - ptr.y), 2));
	}
	
	float TriangleArea(const Point_2D &p1, const Point_2D &p2, const Point_2D &p3) const {
		float a = p1.distance(p2);
		float b = p2.distance(p3);
		float c = p3.distance(p2);
		float s = (a + b + c)/2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
};

int main() {
	Point_2D p1(0, 0);
	Point_2D p2(0, 1);
	Point_2D p3(2, 3);
	float d1 = p1.distance(p2);
	float d2 = p1.distance(p3);
	float d3 = p2.distance(p3);
	cout << "Khoang cach giua 2 diem p1 va p2 la: " << d1 << endl;
	cout << "Khoang cach giua 2 diem p1 va p3 la: " << d2 << endl;
	cout << "Khoang cach giua 2 diem p2 va p3 la: " << d3, << endl;
	
	float area = p1.TriangleArea(p1, p2, p3);
	cout << "Dien tich tam giac tao boi 3 diem la: " << area << endl;
	return 0;
}
#endif

// Bài 2: chu vi, dien tich, duong cheo va kiem tra xem co phai hinh vuong khong 
#if 0
class Rectangle {
private: 
	float length, width;
public:
	Rectangle(float length, float width) : length(length), width(width) {}
	
	float circumference() const {
		return ((length + width) / 2);
	}
	
	float area() const {
		return (length * width);
	}
	
	float diagonal() {
		return sqrt(pow(length, 2) + pow(width, 2));
	}
	
	bool isSquare() const {
		return (length == width);
	}
};

int main() {
	Rectangle rect_1(5, 3);
	Rectangle rect_2(5, 5);
	
	float a = rect_1.circumference();
	float b = rect_1.area();
	float c = rect_1.diagonal();
	
	cout << "Chu vi hinh chu nhat la: " << a << endl;
	cout << "Dien tich hinh chu nhat la: " << b << endl;
	cout << "Duong cheo hinh chu nhat la: " << c << endl;
	
	if(rect_1.isSquare()) {
		cout << "Day la hinh vuong" << endl;
	} else {
		cout << "Day khong phai la hinh vuong" << endl;
	}
	
	if(rect_2.isSquare()) {
		cout << "Day la hinh vuong" << endl;
	} else {
		cout << "Day khong phai la hinh vuong" << endl;
	}
	return 0;
}
#endif

// Bai 3
#if 0
class Circle {
private:
	float radius;
	const float pi = 3.14;
public:
	Circle(float r) : radius(r) {}
	
	float circumference() const {
		return (4 * pi * radius);
	}
	
	float area() {
		return (4 * pi * pow(radius, 2));
	}
};

int main() {
	Circle r = 2;
	cout << "Chu vi hinh tron la: " << r.circumference() << endl;
	cout << "Dien tich hinh tron la: " << r.area() << endl;
	return 0;
}
#endif

 //Bai 4
#if 1
 class Animal {
private:
	string name;
	int age;
	double weight, height;
public:	 
	Animal(string name, int age, double weight, double height) : name(name), age(age), weight(weight), height(height) {}
	double BMI();
	void compare_weight(Animal& a, Animal& b);
	void compare_age(Animal& a, Animal& b);
	string getName();
};

double Animal::BMI() {
	return (weight / pow(height, 2));
}

void Animal::compare_weight(Animal& a, Animal& b) {
	if(a.weight > b.weight) {
		cout << a.name << " nang hon " << b.name << endl;
	} else if (a.weight < b.weight) {
			cout << a.name << " nhe hon " << b.name << endl;
		} else {
			cout << "Ca 2 bang nhau " << endl;
			}
}

void Animal::compare_age(Animal& a, Animal& b) {
	if(a.age > b.age) {
		cout << a.name << " lon hon " << b.name << endl;
	} else if(a.age < b.age) {
			cout << a.name << " nho hon " << b.name << endl;
		} else {
			cout <<"Ca 2 bang nhau " << endl;
			}
}

string Animal::getName() {
	return name;
}

int main() {
	Animal cat("meo", 3, 10, 40);
	Animal dog("cho", 4, 15, 50);
	
	cout <<"BMI cua " << cat.getName() << " la: " << cat.BMI() << endl;
	cout <<"BMI cua " << dog.getName() << " la: " << dog.BMI() << endl;
	
	cat.compare_weight(cat, dog);
	cat.compare_age(cat, dog);
	return 0;
}
#endif

// Bai 5
#if 0
class Person {
private:
	char name[100];
	int age;
	char address[100];
public:	
	Person();
	Person(char*, int, char*);
	
	void setName(char*);
	void setAge(int);
	void setAddress(char*);
	
	char* getName();
	int getAge();
	char* getAddress();
	
	void showInfo();
	void getPersonInfo(Person* person);
	void showPersonInfo(Person* person);
};
// Ham khoi tao mac dinh 
Person::Person() {
	this->name[0] = '\0';
	this->age = 0;
	this->address[0] = '\0';
} 


Person::Person(char* name, int age, char* address) {
	strcpy_s(this->name, 99, name);
	this->age = age;
	strcpy_s(this->address, 99, address);
}

void Person::setName(char* name) {
	strcpy_s(this->name, 99, name);
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::setAddress(char* address) {
	strcpy_s(this->address, 99, address);
}

char* Person::getName() {
	return this->name;
}

int Person::getAge() {
	return this->age;
}

char* Person::getAddress() {
	return this->address;
}

void Person::showInfo() {
	cout << "==============================" << endl;
	cout << "Ten: " << name << endl;
	cout << "Tuoi: " << age << endl;
	cout << "Dia chi: " << address << endl;
	cout << "==============================" << endl;
}

void Person::getPersonInfo(Person* person) {
	int age;
	char name[100], address[100];
	
	cout << "Ten: ";
	cin.getline(name, 100);
	cout << "Tuoi: ";
	cin >> age;
	cin.ignore();
	cout << "Dia chi: ";
	cin.getline(address, 100);
	
	person->setName(name);
	person->setAge(age);
	person->setAddress(address);
	// person = new Person(name, age, address);
	
}

void Person::showPersonInfo(Person* person) {
	person->showInfo();
}

void Person::showPersonInfo(Person* person);
void Person::getPersonInfo(Person* person);
int main() {
	Person* p = new Person();
	p->getPersonInfo(p);
	p->showPersonInfo(p);
	delete p;
	return 0;
}
#endif

//Bai 6
#if 0
class Fraction {
private:
	int numerator, denominator;
public:	
	Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}
	float add_fraction(const Fraction& frac_1,const Fraction& frac_2) const; 
	float sub_fraction(const Fraction& frac_1,const Fraction& frac_2) const; 
	float mul_fraction(const Fraction& frac_1,const Fraction& frac_2) const; 
	float div_fraction(const Fraction& frac_1,const Fraction& frac_2) const; 
};

float Fraction::add_fraction(const Fraction& frac_1,const Fraction& frac_2) const {
	int a = (frac_1.numerator * frac_2.denominator) + (frac_2.numerator * frac_1.denominator);
	int b = frac_1.denominator * frac_2.denominator;
	return (a / static_cast<float>(b));
}

float Fraction::sub_fraction(const Fraction& frac_1,const Fraction& frac_2) const {
	int a = (frac_1.numerator * frac_2.denominator) - (frac_2.numerator * frac_1.denominator);
	int b = frac_1.denominator * frac_2.denominator;
	return (a / static_cast<float>(b));
}

float Fraction::mul_fraction(const Fraction& frac_1,const Fraction& frac_2) const {
	int a = frac_1.numerator * frac_2.numerator;
	int b = frac_1.denominator * frac_2.denominator;
	return (a / static_cast<float>(b));
}

float Fraction::div_fraction(const Fraction& frac_1,const Fraction& frac_2) const {
	int a = frac_1.numerator * frac_2.denominator;
	int b = frac_1.denominator * frac_2.numerator;
	return (a / static_cast<float>(b));
}

int main() {
	Fraction frac_1(3,5);
	Fraction frac_2(4,7);
	
	cout << "Phep cong hai phan so la: " << frac_1.add_fraction(frac_1, frac_2) << endl;
	cout << "Phep tru hai phan so la: " << frac_1.sub_fraction(frac_1, frac_2) << endl;;
	cout << "Phep nhan hai phan so la: " << frac_1.mul_fraction(frac_1, frac_2) << endl;
	cout << "Phep chia hai phan so la: " << frac_1.div_fraction(frac_1, frac_2) << endl;
	return 0;
}
#endif

// Bai 7
#if 0
class Date {
private:
	int day, month, year;
public:	
	Date(int day, int month, int year) : day(day), month(month), year(year) {}
	int calculateAge(int, int, int) const;
	bool isHoliday() const;
};

int Date::calculateAge(int currentDay, int currentMonth,int currentYear) const {
		int age = currentYear - year;
		if((currentMonth < month) || (currentMonth == month && currentDay < day)) {
			age -= 1;
		}
	return age;	
	}
	
bool Date::isHoliday() const {
	if((day == 1 && month == 1) ||
		(day == 30 && month == 4) ||
		(day == 1 && month == 5) ||
		(day == 2 && month == 9)) {
		return true;	
	} else {
		return false;
	}
}

int main() {
	int currentDay, currentMonth, currentYear;
	cout << "Nhap ngay thang nam hien tai: ";
	cin >> currentDay >> currentMonth >> currentYear;
	Date date(2, 5, 2000);
	cout << "Tuoi hien tai la: " << date.calculateAge(currentDay, currentMonth, currentYear) << endl;
	
	if(date.isHoliday()) {
		cout << "Day la ngay le" << endl;
	} else {
		cout << "Day khong phai la ngay le" << endl;
	}
	return 0;
}
#endif

//Bai 8
#if 0
class BankAccount {
private:
	string id;
	string name;
	double balance;
public:	
	BankAccount(string id, string name, double balance) : id(id), name(name), balance(balance) {}
	void deposit(double);
	void withdraw(double);
	void check_balance();
};

 void BankAccount::deposit(double amount) {
		if(amount > 0) {
			balance += amount;
			cout << "Tai khoan chinh la: " << balance << endl;
		} else {
			cout << "Khong hop le" << endl;
		}
	}
	
void BankAccount::withdraw(double amount) {
	if(amount > 0 && amount <= balance) {
		balance -= amount;
		cout << "Tai khoan chinh hien con: " << balance<< endl;
	} else {
		cout << "Khong hop le" << endl;
	}
}

void BankAccount::check_balance() {
	cout << "Tai khoan hien co: " << balance << endl;
}

int main() {
	BankAccount account("123", "ABC", 1000);
	account.check_balance();
	account.deposit(200);
	account.withdraw(400);
	account.check_balance();
	account.withdraw(1000);
	return 0;
}
#endif

//Bai 9
#if 0
class Car {
private:
	string color;
	string model;
	double kmDriven;
public: 
	Car(string color, string model, double kmDriven) : color(color), model(model), kmDriven(kmDriven) {}
	double maintain();
	void showInfo();
	double getkmDriven();
};

double Car::maintain() {
	return (0.05 * kmDriven);
}

double Car::getkmDriven() {
	return kmDriven;
}

void Car::showInfo() {
	cout << "==============================" << endl;
	cout << "Mau sac: " << color << endl;
	cout << "Kieu dong co: " << model << endl;
	cout << "So km da di: " << kmDriven << endl;
	cout << "Chi phi bao tri: " << maintain() << endl;
	cout << "==============================" << endl;
}

int main() {
	Car car("Red", "Petrol", 12000.5);
	car.showInfo();
	return 0;
}
#endif

//Bai 10
#if 0
class Book {
private:
	string title, author;
	long long int published_year;
	int amount;
public:	
	Book(string title, 
		string author, 
		long long int published_year, 
		int amount) : title(title), author(author), published_year(published_year), amount(amount) {}
	void showInfo();
	void borrow();
	void give_back();
};

void Book::borrow() {
	if(amount > 0) {
		amount--;
		cout << title << " duoc muon" << endl;
	} else {
		cout << "Thu vien khong co sach nay" << endl;
	}
}

void Book::give_back() {
	amount++;
	cout << title << " da duoc tra" << endl;
}

void Book::showInfo() {
	cout << "==============================" << endl;
	cout << "Ten sach: " << title << endl;
	cout << "Tac gia: " << author << endl;
	cout << "Nam xuat ban: " << published_year << endl;
	cout << "So luong: " << amount << endl;
	cout << "==============================" << endl;
}

int main() {
	Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925, 3);
	book.showInfo();
	
	book.borrow();
	book.showInfo();
	
	book.give_back();
	book.showInfo();
	return 0;
}
#endif
