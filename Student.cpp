#include "Student.h"


char *Student::getName() {
    return this->name;
}

void Student::setName(char *name) {
    this->name = name;
}

int Student::getAge() {
    return this->age;
}

void Student::setAge(int age) {
    this->age = age;
}

Student::Student() {
    cout << "Student Create" << endl;
}

Student::Student(char *name, int age) : name(name), age(age) {
    cout << "Student " << name << " Create 2 agent" << endl;
}

Student::~Student() {
    cout << "Student " << name << " Destroy" << endl;
}

Student::Student(const Student &student) {
    this->setName(student.name);
    this->setAge(student.age);
    cout << "Student " << name << " Copy" << endl;
}


