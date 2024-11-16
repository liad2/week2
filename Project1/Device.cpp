#include "Device.h"

std::string Device::getOS()
{
	return m_os;
}


bool Device::isActive() 
{
	return m_active;
}

void Device::activate() 
{
	m_active = true;
}

void Device::deactivate() 
{
	m_active = false;
}