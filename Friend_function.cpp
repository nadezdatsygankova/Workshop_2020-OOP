//Author: Nadezda Tsygankova
//Week 5- Friend Functions/Classes
//Lab Task

//Create two classes, HUSBAND (Family Member 1) and WIFE (Family Member 2). Make WIFE as friend class of HUSBAND. The structure of classes are given below. 


#include <iostream>

class WIFE;
class HUSBAND
{
private:
	std::string Husband_fname;
	std::string Husband_lname;
	int Husband_income;
public:
	HUSBAND(std::string f1, std::string l1, int inc) :Husband_fname(f1), Husband_lname(l1), Husband_income(inc){}
	HUSBAND()
	{
		//	Default initializations of data members
		Husband_fname=" ";
		Husband_lname = " ";
		Husband_income = 0;
	
	}
	int getIncome() {
		return Husband_income;
	}

	friend class WIFE;
};

class WIFE 
{
private:
	std::string Wife_fname;
	std::string Wife_lname;
	int Wife_income;
	int tax_rate;
public:
	WIFE(std::string f2, std::string l2, int inc, int tr) :Wife_fname(f2), Wife_lname(l2), Wife_income(inc), tax_rate(tr) {}
	WIFE()
	{
		//Default initializations of private data members;
		 Wife_fname ="";
		 Wife_lname="";
		Wife_income =0;
		tax_rate=0.2;
	}
	float calcTax(HUSBAND& f) {
		float husbandTax= (f.Husband_income * getTaxRate())/100;
		float wifeTax = (Wife_income * getTaxRate())/100;
		return (husbandTax + wifeTax);
	}

	float getTaxRate() {
		return tax_rate;
	}

	int getIncome() {
		return Wife_income;
	}

};

int main()
{
	HUSBAND obj1("Albert", "John", 55026);
	WIFE obj2("Mary", "Chin", 120000, 5);

	//Task1: Display the tax rate;
	std::cout << "The tax rate" << obj2.getTaxRate() << std::endl;

	// Task2: Display income of HUSBAND;
	std::cout << "Income of HUSBAND: "<<obj1.getIncome() << std::endl;
	// Task3: Display income of WIFE;
	std::cout << "Income of WIFE: " << obj2.getIncome() << std::endl;
	// Task4: Display total family income;
	std::cout <<"Total income: " << obj1.getIncome()+ obj2.getIncome() <<std::endl;
	// Task5: Display total Tax Amount;
	std::cout <<"Total Tax Amount: "<< obj2.calcTax(obj1) << std::endl;

	system("pause");
	return 0;
}
