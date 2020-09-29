/*
Luke Johnson
C++ Fall 2020
Due: 9/28/2020
Write a program that inputs a file with integers and also
puts data on a sepereate file, the program needs to be able to
find the standard deviation and the mean of the integers.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

float mean_Cal(float num1, float num2, float num3, float num4);
float std_Cal(float num1, float num2, float num3, float num4, float);
//Prototypes for mean and population standard deviation



int main()
{

	int num1; //Inputting data from console
	int num2;
	int num3;
	int num4;
	int filenum1;
	int filenum2;
	int filenum3;
	int filenum4;



	ifstream infile; //Inputting stream files
	ofstream outfile; //Outputting stream files

	infile.open("inMean.std.dat.txt");
	outfile.open("outMean.std.dat.txt");
	//opening the files

	//Input values from the input file
	infile >> filenum1 >> filenum2 >> filenum3 >> filenum4;


	//Enters the calculated numbers into the outgoing filet
	outfile << "Mean of the integers: " << mean_Cal(filenum1, filenum2, filenum3, filenum4) << endl;
	outfile << "This is the population standard deviation of the integers: " << std_Cal(filenum1, filenum2, filenum3, filenum4, mean_Cal(filenum1, filenum2, filenum3, filenum4)) << endl << endl << endl;

	//Inputs entered on keyboard
	cout << "Enter 4 integers and press enter after each" << endl;
	cin >> num1 >> num2 >> num3 >> num4;

	//outputs the calulated values that were entered on keybaord
	outfile << endl << "Mean of integers entered by user: " << mean_Cal(num1, num2, num3, num4);
	outfile << endl << "Population Standard Deviation of integers entered by user:  " << std_Cal(num1, num2, num3, num4, mean_Cal(num1, num2, num3, num4)) << endl;

	//outputs the calulated values on screen that user entered
	cout << "Mean of integers entered by user: " << mean_Cal(num1, num2, num3, num4) << endl;
	cout << "Population Standard Deviation of integers entered by user: " << std_Cal(num1, num2, num3, num4, mean_Cal(num1, num2, num3, num4)) << endl;


	return 0;

}


//function definiton of the mean
float mean_Cal(float num1, float num2, float num3, float num4)
{
	return float((num1 + num2 + num3 + num4) / float(4));
}

float std_Cal(float num1, float num2, float num3, float num4, float mean)
{
	return sqrt(((pow((num1 - mean), 2) + pow((num2 - mean), 2) + pow((num3 - mean), 2) + pow((num4 - mean), 2)) / 4));
}


	//Function types for mean_cal and std_cal


