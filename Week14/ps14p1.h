#include <string>
using namespace std;
class Membership
{
public:
	void Member_First_Name(string Fname);
	string Member_First_Name();
	void Member_Last_Name(string Lname);
	string Member_Last_Name();
	void Member_Age(int Age);
	int Member_Age();
	void Member_Type(string Type);
	string Member_Type();
	float Membership_Cost();
	Membership();
protected:
	string MFname;
	string MLname;
	int MAge;
	string MType;
	float MCost;
};
void Membership::Member_First_Name(string Fname)
{
	MFname = Fname;
}
string Membership::Member_First_Name()
{
	return MFname;
}
void Membership::Member_Last_Name(string Lname)
{
	MLname = Lname;
}
string Membership::Member_Last_Name()
{
	return MLname;
}
void Membership::Member_Age(int Age)
{
	MAge = Age;
}
int Membership::Member_Age()
{
	return MAge;
}
void Membership::Member_Type(string Type)
{
	MType = Type;
}
string Membership::Member_Type()
{
	return MType;
}
float Membership::Membership_Cost()
{
	float Discount;
	float TempCost;
	if (MAge > 50)
		Discount = 0.9;
	else
		Discount = 1;
	if (MType == "Gold")
		TempCost = 1200.00;
	else if (MType == "Silver")
		TempCost = 1000.00;
	else if (MType == "Bronze")
		TempCost = 500.00;
	else
		TempCost = 500.00;
	MCost = TempCost * Discount;
	return MCost;
}
Membership::Membership()
{
	MFname = "Not Entered";
	MLname = "Not Entered";
	MAge = 18;
	MType = "Bronze";
	MCost = 0;
}