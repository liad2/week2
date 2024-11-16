#include "User.h"
void User::init(unsigned int id, const std::string username, unsigned int age) 
{
	m_id = id;
	m_username = username;
	m_age = age;
}

void User::clear() 
{
	m_id = 0;
	m_username = "";
	m_age = 0;
	m_devicesList.clear();
}
unsigned int User::getID() 
{
	return m_id;
}
std::string User::getUserName() 
{
	return m_username;
}
unsigned int User::getAge() 
{
	return m_age;
}
DevicesList& User::getDevices() 
{
	return m_devicesList;
}
void User::addDevice(Device newDevice) 
{
	m_devicesList.add(newDevice);
}
bool User::checkIfDevicesAreOn() 
{
	DeviceNode* node = m_devicesList.get_first();
	while (node != NULL) {
		if (!node->get_data().isActive())
			return false;
		node = node->get_next();
	}
	return true;
}