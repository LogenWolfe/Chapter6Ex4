// Name: Logen N. Wolfe
// Date: 11/18/2026
// Program: Chapter 6 Exercise 4
// Description: This program will ask for an objects mass (in KG) and velocity (in m/s) and will calculate the kinetic energy of the object using the formula KE = 1/2 * mass * velocity^2. 
// The program will then output the kinetic energy to the user.

#include <iostream>
#include <iomanip>
using namespace std;
double kineticenergy(double mass, double velocity)
{
	return 0.5 * mass * velocity * velocity;
}

int main()
{
	double mass;
	double velocity;
	double ke;

	cout << "Welcome to Logen's Kinetic Energy Calculator!" << endl;

	cout << "First, gimme your object's mass (In KG, please!): " << endl;

	cin >> mass;

	cout << "Now, gimme your object's velocity (in m/s, please!): " << endl;

	cin >> velocity;

	ke = kineticenergy(mass, velocity);

	cout << fixed << setprecision(2) << "Seems like your object's kinetic energy is: " << ke << " joules!" << endl; 
	// Note - I didn't know "Joules" was the measurement for Kinetic Energy until now. You really do learn somethin' new everyday!

	if (ke <= 0)
	{

		cout << "Your object's kinetic energy is 0 joules?! Jeez, you're goin' nowhere fast.." << endl;

	}


	return 0;
}




