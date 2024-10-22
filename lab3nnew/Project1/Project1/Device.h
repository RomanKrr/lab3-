#pragma once
#include <string>

using namespace std;

class Device	
{
public:
	string name;
	string brand;
	int year;
// 2 
	const int maxPowerUsage;
	string& description;
// 4  
	static int deviceCount;


	void displayInfo();
	static void showDeviceCount();
	int calculatePowerUsage(int hours) const;
	
//7
	Device changeName(Device& device);

// 1
	Device();//without param
	Device(string n, string b, int y, string dV, string sT, bool iC, int pU, string dT, int maxPower, string& desc);//with param
	Device(const Device& m);//copy

//8 
	Device(string n, string b);

// 3  
	~Device();


private:
	string driverVersion;
	string status;
	bool isConnected;
	int powerUsage;
	string deviceType;
};

