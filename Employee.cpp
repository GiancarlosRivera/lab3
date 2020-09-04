#include "employee.hpp"

Employee::Employee(string fullName, double hSalary, int hWeekly, int years, bool status, int warnings){
    eFullName = fullName;
    eHSalary = hSalary;
    hourWeekly = hWeekly;
    yearService = years;
    workStatus = status;
    this->warnings = warnings;
}
// ! Getters
string Employee::getFullName() { return eFullName; }
double Employee::getHourlySalary() { return eHSalary; }
int Employee::getHoursPerWeek() { return hourWeekly; }
int Employee::getYearsOfService() { return yearService; }
bool Employee::getStatus() { return workStatus; }
int Employee::getWarnings() { return warnings; }
double Employee::getYearlySalary() { return eHSalary * hourWeekly * 4.5 * 12; }

// ! Setters
void Employee::setFullName(string fullName) { eFullName = fullName; }
void Employee::setHourlySalary(double hSalary) { eHSalary = hSalary; }
void Employee::setHoursPerWeek(int hours) { hourWeekly = hours; }
void Employee::setYearsOfService(int years) { yearService = years; }
void Employee::setStatus(bool status) { workStatus = status; }
void Employee::setWarnings(int warnings) { this->warnings = warnings; }

/**
	 * A method that returns the level of seniority of an employee. (Levels 0 to 3)
	 * 1. The level of seniority is determined by years of service:
	 * 		a) For a level 3 seniority the employee needs at least 10 years of service.
	 * 		b) For a level 2 seniority the employee needs at least 5 years of service.
	 * 		c) For a level 1 seniority the employee needs at least 1 years of service.
	 * 		d) For a level 0 the employee needs less than 1 year of service.
	 * @return 
	 * */

int Employee::seniorityLevel(){
    int yearLevel;
    if(yearService >= 10){
      yearLevel = 3;
    }
    else if(yearService > 5 || yearservice < 10){
    yearLevel = 2;
    }
    else if(yearService < 5 || yearservice > 1){
       yearLevel = 1;
    }
    else(yearLevel = 0);
      
    
    //Code [Use If/Else]
    return yearLevel;
}
