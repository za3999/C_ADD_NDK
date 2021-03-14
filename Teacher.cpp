#include "Teacher.h"


Teacher::Teacher(char *name, char *sex) : name(name), sex(sex) {}

char *Teacher::getName() const {
    return name;
}

void Teacher::setName(char *name) {
    Teacher::name = name;
}

char *Teacher::getSex() const {
    return sex;
}

void Teacher::setSex(char *sex) {
    Teacher::sex = sex;
}

Teacher::~Teacher() {

}
