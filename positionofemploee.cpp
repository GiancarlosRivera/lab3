#include "Position.hpp"

Position::Position(string pCode, int rank, double salary, bool availability, bool jobType){
    setPositionCode(pCode);
    setRank(rank);
    setSalary(salary);
    setAvailability(availability);
    setJobType(jobType);
}
string Position::getPositionCode() { return positionCode; }
int Position::getRank() { return reqRank; }
double Position::getSalary() { return hSalary; }
bool Position::isAvailable() { return available; }
bool Position::getJobType() { return jobType; }
void Position::setPositionCode(string positionCode) { this->positionCode = positionCode; }
void Position::setRank(int reqRank) { this->reqRank = reqRank; }
void Position::setSalary(double hSalary) { this->hSalary = hSalary; }
void Position::setAvailability(bool available) { this->available = available; }
void Position::setJobType(bool jobType) { this->jobType = jobType; }

/**
	 * A method that calculates an average yearly salary.
	 * 1. The calculation depends what type of job it is:
	 * 		a) If the position is part time 20 hours is determined.
	 * 		b) If the position is full time 40 hours is determined.
	 * 
	 * Hint: Given an hourly salary to calculate a yearly salary we 
	 * use the following formula: 
	 * 		totalYearly = payPerHour*Hours*4.5*monthsAYear.
	 * @return 
	 */


double Position::getYearlySalary(){
    //Code [Use If/Else]
double ySalary;
if (jobType){
    ySalary = 40 * hSalary * 4.5 * 12;
}
else (jobType){
    ySalary = 20 * hSalary * 4.5 * 12;
}
return ySalary;
}