#pragma once
#include <string>
#include "DeviceList.h"
class User
{
public:
	void init(unsigned int id, const std::string username, unsigned int age);
	void clear();
	unsigned int getID();
	std::string getUserName();
	unsigned int getAge();
	DevicesList& getDevices();
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn();
private:
	unsigned int m_id;
	std::string m_username;
	unsigned int m_age;
	DevicesList m_devicesList;
	

	

};

