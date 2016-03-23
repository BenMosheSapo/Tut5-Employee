#pragma once
#include <string>

using namespace std;
class Employee
{
protected:
	static int numberOfEmployees;
	double Salary;
	string Name;
	int StaffNum;
public:
	string name();
	int staffNumber();
	virtual double salary();
};

class SalaryEmployee : public Employee {

public:
	SalaryEmployee(int StaffNum_in, string name_in);
	void setSalary(double salary_in);
	virtual double salary();
};

class HourlyEmployee : public Employee {
protected:
	double hourlyR;
	int HoursW;
public:
	HourlyEmployee(int StaffNum_in, string name_in);
	void setHourlyRate(double hourlyR_in);
	void setHoursWorked(int HoursW_in);
	virtual double salary();
};

class CommissionEmployee : public Employee {
protected:
	double Bsalary;
	double rate;
	int rev;
public:
	CommissionEmployee(int StaffNum_in, string name_in);
	void setBaseSalary(double Bsalary_in);
	void setRate(double rate_in);
	void setRevenue(int rev_in);
	virtual double salary();
};