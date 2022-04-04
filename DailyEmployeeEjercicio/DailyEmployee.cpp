#include <iostream>
#include "DailyEmployee.h" 
using namespace std;

// Constructor
DailyEmployee::DailyEmployee( const string &first, const string &last, const string &ssn, double dailyWage, double daysWorked ) : Employee( first, last, ssn ){
    setWage( dailyWage ); 
    setWorkedDays( daysWorked ); 
} 

// Define el salario del empleado
void DailyEmployee::setWage( double wageToSet ){
    dailyWage = ( wageToSet < 0.0 ? 0.0 : wageToSet );
} 
// Retornamos el salario
double DailyEmployee::getWage() const{
    return dailyWage;
} 

// Define cantidad de dias trabajados
void DailyEmployee::setWorkedDays( double accountedDays ){
    workedDays = ( (( accountedDays >= 0.0 ) && ( accountedDays <= daysPerMonth )) ? accountedDays : 0.0 );
} 

//Retornamos el numero de dias trabajados
double DailyEmployee::getWorkedDays() const{
    return workedDays;
}

// Calcula las ganancias basandose en los dias trabajados
double DailyEmployee::earnings() const{
    if ( getWorkedDays() >= 1 ) // Condicion que verifica si el numero de dias trabajados igual o mayor a 1
        return getWage() * getWorkedDays();
    if ( getWorkedDays() == 0 )
        return 0.0; //Si no se cumple la condicion de arriba es porque no ha trabajado al menos un dia por lo cual no ganaria nada
} 

// informacion del empleado y su cantidad correspondiente de horas.
void DailyEmployee::print() const{
    cout << "<<<<<<Information>>>>>>";
    cout << "Daily employee: ";
    Employee::print(); 
    cout << "\nSalary:";
    cout << "\nDays worked: " << getWorkedDays() << "; Daily wage: " << getWage();
} 