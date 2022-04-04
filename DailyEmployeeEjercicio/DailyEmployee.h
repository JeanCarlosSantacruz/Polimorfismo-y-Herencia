
#ifndef DAILY_H
#define DAILY_H

#include "Employee.h" 

class DailyEmployee : public Employee{
public:
    static const int daysPerMonth = 30; 
    DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

    void setWage( double ); 
    double getWage() const; 
    void setWorkedDays( double ); 
    double getWorkedDays() const; 
    virtual double earnings() const; 
    virtual void print() const; 

private:
    double dailyWage; 
    double workedDays; 
}; 

#endif 