#include <string>
using namespace std;
class ComputerAsset
{
public:
	void Computer_Make(string Make);
	string Computer_Make();
	void Computer_Model(string Model);
	string Computer_Model();
	void Computer_CPU(string CPU);
	string Computer_CPU();
	void Computer_RAM(string RAM);
	string Computer_RAM();
	void Computer_HardDrive(string HardDrive);
	string Computer_HardDrive();
	void Computer_Type(string Type);
	string Computer_Type();
	float Computer_Cost();
	ComputerAsset();
protected:
	string CMake;
	string CModel;
	string CCPU;
	string CRAM;
	string CHDrive;
	string CType;
	float CCost;
};
void ComputerAsset::Computer_Make(string Make)
{
	CMake = Make;
}
string ComputerAsset::Computer_Make()
{
	return CMake;
}
void ComputerAsset::Computer_Model(string Model)
{
	CModel = Model;
}
string ComputerAsset::Computer_Model()
{
	return CModel;
}
void ComputerAsset::Computer_CPU(string CPU)
{
	CCPU = CPU;
}
string ComputerAsset::Computer_CPU()
{
	return CCPU;
}
void ComputerAsset::Computer_RAM(string RAM)
{
	CRAM = RAM;
}
string ComputerAsset::Computer_RAM()
{
	return CRAM;
}
void ComputerAsset::Computer_HardDrive(string HardDrive)
{
	CHDrive = HardDrive;
}
string ComputerAsset::Computer_HardDrive()
{
	return CHDrive;
}
void ComputerAsset::Computer_Type(string Type)
{
	CType = Type;
}
string ComputerAsset::Computer_Type()
{
	return CType;
}
float ComputerAsset::Computer_Cost()
{
	float MakeCost = 0;
	float CPUCost = 0;
	float RAMCost = 0;
	float HDriveCost = 0;
	float TypeCost = 0;
	
	if (CMake == "Lenovo")
		MakeCost = 1200.00;
	else if (CMake == "HP")
		MakeCost = 1000.00;
	else if (CMake == "Apple")
		MakeCost = 2000.00;

	if (CCPU == "Intel")
		CPUCost = 200.00;

	if (CRAM == "16GB")
		RAMCost = 300.00;
	else if (CRAM == "32GB")
		RAMCost = 500.00;

	if (CHDrive == "SSD")
		HDriveCost = 500.00;

	if (CType == "Laptop")
		TypeCost = 300.00;
	else if (CType == "Tablet")
		TypeCost = -200.00;

	CCost = MakeCost + CPUCost + RAMCost + HDriveCost + TypeCost;
	return CCost;
}
ComputerAsset::ComputerAsset()
{
	CMake = "Lenovo";
	CModel = "LE100A";
	CCPU = "Intel";
	CRAM = "32GB";
	CHDrive = "HD";
	CType = "Laptop";
	CCost = 0;
}