#include "iostream"


using namespace std;

//force calculator
void force(float m, float a)
{
	float forcecalc = m * a;
	cout << "Force is equal to: " << forcecalc << " Newtons" << endl;
}


//mass calculator
void mass(float a, float f)
{
	float masscalc = f / a;
	cout << "Mass is equal to: " << masscalc << " kg" << endl;
}


//acceleration calculator
void accel(float f, float m)
{
	float accelcalc = f / m;
	cout << "Acceleration is equal to: " << accelcalc << " m/s squared" << endl;
}
