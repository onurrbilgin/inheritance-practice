#include "practice.h"

using std::cout;
using std::cin;
using std::string;




namespace
{

}

namespace Practice
{
    // Implementation of Employee class
    Employee::Employee():_name("Unknown"), _ssn("Unknown"){
        // Deliberately empty
    }

    Employee::Employee(const string &name, const string &ssn):_name(name), _ssn(ssn){
        // Deliberately empty
    }

    Employee::Employee(const Employee &obj){    // copy constructor

        setName(obj.getName());
        setSsn(obj.getSsn());
    }

    const string Employee::getName() const{
        return _name;
    }

    const string Employee::getSsn() const{
        return _ssn;
    }

    void Employee::setName(const string &name){
        _name = name;
    }

    void Employee::setSsn(const string &ssn){
        _ssn = ssn;
    }

    void Employee::printCheck(){
        std::cerr << "Error! printCheck() FUNCTION CALLED FOR AN UNDIFFARANTIATED OBJECT.." << std::endl;
    }

    const Employee Employee::operator=(const Employee &rtSide){ // assignment operator overload

        if(this == &rtSide)
            return *this;
        else{

            setName(rtSide.getName());
            setSsn(rtSide.getSsn());

            return *this;

        }
    }

    // End of implementation of Employee class
    

    // Implementation of FixedWageEmployee class

    FixedWageEmployee::FixedWageEmployee():Employee(), _wage(0){
        // Deliberately empty
    }

    FixedWageEmployee::FixedWageEmployee(const std::string &name, const std::string &ssn, int wage):Employee(name, ssn), _wage(wage){
        // Deliberately empty
    }

    FixedWageEmployee::FixedWageEmployee(const FixedWageEmployee &obj):Employee(obj), _wage(obj.getWage()){ // copy constructor
        // Deliberately empty
    }

    const int FixedWageEmployee::getWage() const{
        return _wage;
    }

    void FixedWageEmployee::setWage(int wage){
        _wage = wage;
    }

    void FixedWageEmployee::printCheck(){

        std::cout << "Amount to be paid: " << getWage() << std::endl;
    }

    const FixedWageEmployee FixedWageEmployee::operator=(const FixedWageEmployee &rtSide){

        if(this == &rtSide)
            return *this;
        else{

            Employee::operator=(rtSide);
            setWage(rtSide.getWage());

            return *this;
        }
    }


}