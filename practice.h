#ifndef PRACTICE_H
#define PRACTICE_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

namespace Practice
{  

    class Employee
    {
        public:
            Employee();
            Employee(const std::string &name, const std::string &ssn);
            Employee(const Employee &obj);  // copy constructor

            const std::string getName() const;
            const std::string getSsn() const;

            void setName(const std::string &name);
            void setSsn(const std::string &ssn);

            void printCheck();
            const Employee operator=(const Employee &rtside);   // assignment operator overload

        protected:
            std::string _name;
            std::string _ssn;


    };


    class FixedWageEmployee : public Employee
    {
        public:
            FixedWageEmployee();
            FixedWageEmployee(const std::string &name, const std::string &ssn, int wage);
            FixedWageEmployee(const FixedWageEmployee &obj);    // copy constructor

            const int getWage() const;
            void setWage(int wage);

            void printCheck();  // Will have different meaning than base class
            const FixedWageEmployee operator=(const FixedWageEmployee &rtSide); // assignment operator overload

        protected:
            int _wage;

    };

    

}


#endif