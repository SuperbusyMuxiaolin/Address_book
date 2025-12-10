#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>
#include <iostream>

struct Person{
    std::string m_name;
    int m_sex;
    int m_age;
    std::string m_number;
};
#define MAX 1000
struct Addressbook{
    Person p_arrary[MAX];
    int m_size;
};

void showmain(){
    std::cout<<
}


#endif