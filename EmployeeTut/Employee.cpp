#include "Employee.h"
#include <string>

using namespace std;

Employee::~Employee()
{
}

int Employee::staffNumber() {
	return StaffNum;
}

string Employee::name() {
	return Name;
}

SalaryEmployee::SalaryEmployee(int StaffNum_in, string name_in)
{
	StaffNum = StaffNum_in;
	Name = name_in;
}

void SalaryEmployee::setSalary(double salary_in) {
	Salary = salary_in;
}

double SalaryEmployee::salary() {
	return Salary;
}

SalaryEmployee::~SalaryEmployee() {

}

HourlyEmployee::HourlyEmployee(int StaffNum_in, string name_in) {
StaffNum = StaffNum_in;
Name = name_in;
}

void HourlyEmployee::setHourlyRate(double hourlyR_in) {
	hourlyR = hourlyR_in;
}

void HourlyEmployee::setHoursWorked(int HoursW_in) {
	HoursW = HoursW_in;
}

double HourlyEmployee::salary() {
	Salary = hourlyR*HoursW;
	return Salary;
}

CommissionEmployee::CommissionEmployee(int StaffNum_in, string name_in) {
	StaffNum = StaffNum_in;
	Name = name_in;
}

void CommissionEmployee::setBaseSalary(double Bsalary_in) {
	Bsalary = Bsalary_in;
}

void CommissionEmployee::setRate(double rate_in) {
	rate = rate_in;
}

void CommissionEmployee::setRevenue(int rev_in) {
	rev = rev_in;
}

double CommissionEmployee::salary() {
	Salary = Bsalary + rate*rev;
	return Salary;
}