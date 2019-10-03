//
// Created by Nathan Maynard on 10/3/19.
//

#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H
#include <iostream>
using namespace std;
class Faculty{
public:
    Faculty();
    Faculty(string n, string i, string a, string db, string dg, double sl, double ss);
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/

//getter/setter for SSN
    double getSSN() {return SSN;}
    void setSSN(double SSN);

//getter/setter for name
    string getName() {return name;}
    void setName(string name);

//getter/setter for id
    string getId() {return id;}
    void setId(string id);

//getter/setter for address
    string getAddress() {return address;}
    void setAddress(string address);

//getter/setter for DoB
    string getDoB() {return DoB;}
    void setDoB(string DoB);

//getter/setter for degree
    string getDegree() {return degree;}
    void setDegree(string degree);

private:
    double salary;
    double SSN;
};
#endif //CLASSEXCERCISE_FACULTY_H
