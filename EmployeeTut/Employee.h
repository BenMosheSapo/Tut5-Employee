#pragma once
#include <string>

using namespace std;
class Employee
{
protected:
	string Name;
	int StaffNum;
	double Salary;
	static int numberOfEmployees;
public:
	virtual string name();
	virtual int staffNumber();
	virtual double salary();
};

class SalaryEmployee : public Employee {
protected:
	double salary;
public:
	SalaryEmployee(int StaffNum_in, string name_in);
	void setSalary(double salary_in);
	virtual double salary();
};

class HourlyEmployee : public Employee {
protected:
	double hourlyR_in;
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