#include <iostream>
#include "Student.h"

using namespace std;

int main() {
//    Student *stu = new Student("张三", 111);
//    Student *stu2 = stu;
//    stu->setName("李四");
//    cout << stu->getName() << ":" << stu->getAge() << endl;
//    cout << stu2->getName() << ":" << stu2->getAge() << endl;
//    cout << &stu << " : " << &stu2 << endl;
//    delete stu;

    Student stu = Student("张三", 111);
//    Student stu2 = stu;
    Student stu2;
    stu2 = stu;
    stu.setName("李四");
    cout << stu.getName() << ":" << stu.getAge() << endl;
    cout << stu2.getName() << ":" << stu2.getAge() << endl;
    cout << &stu << " : " << &stu2 << endl;
    return 0;
}
