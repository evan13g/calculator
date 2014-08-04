#include "iostream"
#include "string"
#include "formula.h"

//Information gatherer for the calculator
int main()
{
	string selector;
	cout << "What are you trying to calculate?" << endl;
	cout << "\nForce\nMass\nAcceleration" << endl;
	cout << "\nType here: ";
	cin >> selector;

	bool calculator = false;

	while (!calculator)
	{
		if (selector == "force" || "Force")
		{
			float m, a;
			cout << "What is the mass of the object in kg?\nType here: ";
			cin >> m;
			cout << "What is the acceleration of the object in m/s squared?\nType here: ";
			cin >> a;
			force(m, a);
			calculator = true;
		}
		else if (selector == "mass" || "Mass")
		{
			float a, f;
			cout << "How fast is the object accelerating in m/s squared?\nType here: ";
			cin >> a;
			cout << "How many Newtons did the object have?\nType here: ";
			cin >> f;
			mass(a, f);
			calculator = true;
		}
		else if (selector == "acceleration" || "Acceleration")
		{
			float f, m;
			cout << "How many Newtons did the object have?\nType here: ";
			cin >> f;
			cout << "What is the mass of the object in kg?\nType here: ";
			cin >> m;
			accel(f, m);
			calculator = true;
		}
		else
		{
			cout << "Please enter again: ";
			cin >> selector;
			calculator = false;
		}
	}
	return 0;
}
