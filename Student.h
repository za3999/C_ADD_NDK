#include "iostream"

using namespace std;

class Student {
public:
    Student();

    Student(char *name, int age);

    virtual ~Student();

    Student(const Student &student);

private:
    char *name;

    int age;
public:

    char *getName();

    void setName(char *name);

    int getAge();

    void setAge(int age);
};