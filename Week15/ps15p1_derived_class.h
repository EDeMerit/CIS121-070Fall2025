#include <iostream>
#include <string>
using namespace std;

class Manager : public Employee
{
public:
	float Bonus();
	float Long_Term_Bonus();
protected:
	float m_long_bonus;
};
float Manager::Bonus()
{
	if (m_salary > 100000.00)
		m_bonus = m_salary * 0.50f;
	else
		m_bonus = m_salary * 0.00f;
	return m_bonus;
}
float Manager::Long_Term_Bonus()
{
	m_long_bonus = m_salary * 0.5f;
	return m_long_bonus;
}