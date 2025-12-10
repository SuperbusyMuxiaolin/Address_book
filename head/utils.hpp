#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>
#include <iostream>

struct Person{
    std::string m_name;
    std::string m_sex;
    int m_age;
    std::string m_number;
};
#define MAX 1000
struct Addressbook{
    Person p_arrary[MAX];
    int m_size=0;
};

void showmain();
void addperson(Addressbook* abs);
void displayperson(Addressbook* abs);
void deleteperson(Addressbook* abs);
void findperson(Addressbook* abs);
void modifyperson(Addressbook* abs);
void cleanperson(Addressbook* abs);


#endif