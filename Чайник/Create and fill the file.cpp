//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//struct car
//{
//	std::string color;
//	std::string serialNumber;
//	std::string registrationNumber;
//	std::string numberOfDoors;
//	std::string manufactYear;
//	std::string type;
//	std::string price;
//};
//
//int main()
//{
//	car myCar;
//
//	std::cout << "Enter color: ";
//	std::cin >> myCar.color;
//
//	std::cout << "Enter a serial number: ";
//	std::cin >> myCar.serialNumber;
//	int leng1 = myCar.serialNumber.length();
//	while (leng1 != 3)
//	{
//		std::cout << "Error! You have to write 3 symbols!" << std::endl;
//		std::cin >> myCar.serialNumber;
//		leng1 = myCar.serialNumber.length();
//	}
//
//	std::cout << "Enter a registration number: ";
//	std::cin >> myCar.registrationNumber;
//	int leng2 = myCar.registrationNumber.length();
//	while (leng2 != 16)
//	{
//		std::cout << "Error! You have to write 16 symbols!" << std::endl;
//		std::cin >> myCar.registrationNumber;
//		leng2 = myCar.registrationNumber.length();
//	}
//
//	std::cout << "Enter number of doors: ";
//	std::cin >> myCar.numberOfDoors;
//
//	std::cout << "Enter manufacture year: ";
//	std::cin >> myCar.manufactYear;
//
//	std::cout << "Enter type of the car: ";
//	std::cin >> myCar.type;
//
//	std::cout << "Enter price of the car: ";
//	std::cin >> myCar.price;
//
//	std::ofstream outfile;
//	outfile.open("Car.txt");
//	outfile << "Car Information \n\n" <<
//		"Color: " << myCar.color <<
//		"\nSerial number: " << myCar.serialNumber <<
//		"\nRegistration nubmer: " << myCar.registrationNumber <<
//		"\nNumber of doors: " << myCar.numberOfDoors <<
//		"\nManufacture year: " << myCar.manufactYear <<
//		"\nType: " << myCar.type <<
//		"\nPrice: " << myCar.price << "$";
//
//	return 0;
//
//}