#include "iostream"

class Teacher {

private:
    char *name;
    char *sex;

public:
    Teacher(char *name, char *sex);

    virtual ~Teacher();

    char *getName() const;

    void setName(char *name);

    char *getSex() const;

    void setSex(char *sex);
};