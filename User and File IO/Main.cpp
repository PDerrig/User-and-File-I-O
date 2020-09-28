/* 
Preston Derrig
C++ Fall 2020
September 28 2020
Lab #3
User and File I/O
*/

#include <iostream>  // including librares and namespace for the project
#include <fstream>
using namespace std;

// setting up variables and functions that will be used later
int value1, value2, value3, value4, value5, value6, value7, value8;
int error1, error2, error3, error4, error5, error6, error7, error8;
float mean, stddev, sumoferror, varience, mean2, stddev2, sumoferror2, varience2;
void average(); 
void StandardDev();
void average2();
void StandardDev2();

int main()
{
	ifstream infile;  // opening the two files created for this project
	ofstream outfile;
	infile.open("InMeanStd.dat");
	outfile.open("outMeanStd.dat");

	infile >> value1 >> value2 >> value3 >> value4; // using the infile to get the first 4 values


	// setting up the console to show the values, mean, and standard deviation from the infile
	cout << "The four numbers entered from the file are:  " << value1 << " " << value2 << " " << value3 << " " << value4 << endl;
	
	cout << "The average of the values from the file is: ";
	average();
	cout << "The standard deviation of the values from the file is:  ";
	StandardDev();
	cout << endl << endl;

	// setting up the console to prompt the user to input values and then showing the results from those values 
	cout << "Please type in your own four values separated by a space. " << endl;
	cin >> value5 >> value6 >> value7 >> value8;
	cout << "The average of your values are:  ";
	average2();
	cout << "The standard deviation of your values are:  ";
	StandardDev2(); cout << endl << endl;

	// This is getting the outfile to display basically the same thing as the console just did
	outfile << "The values that came from the file are:  " << value1 << " " << value2 << " " << value3 << " " << value4 << endl
	<< "The average of the values from the file is:  " <<mean << endl 
	<< "The standard deviation of the values from the file is:  " << stddev << endl << endl
	<< "The inputted values were:  " << value5 << " " << value6 << " " << value7 << " " << value8 << endl 
	<< "The average of these values is:  " << mean2 << endl
	<< "The standard deviation of these values is:  " << stddev2;

	infile.close(); // closing the two files
	outfile.close();
	return 0;
}

void average() // finding the average of the values found in the infile
{
	mean = value1 + value2 + value3 + value4;
	mean = mean / 4;
	cout << mean << endl;
}

void average2() // calculating the average from the values inputted by the user
{
	mean2 = value5 + value6 + value7 + value8;
	mean2 = mean2 / 4;
	cout << mean2 << endl;
}

void StandardDev() // calculating and outputting the standard deviation from the values in the infile
{
	error1 = value1 - mean; error1 = error1 * error1;
	error2 = value2 - mean; error2 = error2 * error2;
	error3 = value3 - mean; error3 = error3 * error3;
	error4 = value4 - mean; error4 = error4 * error4;

	sumoferror = error1 + error2 + error3 + error4;
	varience = sumoferror / 4;
	stddev = sqrt(varience);

	cout << stddev << endl;
}

void StandardDev2() // calculating the standard deviation for the values from the user
{
	error5 = value5 - mean2; error5 = error5 * error5;
	error6 = value6 - mean2; error6 = error6 * error6;
	error7 = value7 - mean2; error7 = error7 * error7;
	error8 = value8 - mean2; error8 = error8 * error8;

	sumoferror2 = error5 + error6 + error7 + error8;
	varience2 = sumoferror2 / 4;
	stddev2 = sqrt(varience2);

	cout << stddev2;
 }

