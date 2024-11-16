#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////

class Device
{
public:
	std::string getOS();
	bool isActive();
	void activate();
	void deactivate();

	void init(unsigned int id, DeviceType type,
		std::string os)
	{
		m_id = id;
		m_os = os;
		m_active = false;
		m_deviceType = type;
	}

	unsigned int getID() 
	{
		return m_id;
	}

	DeviceType getType() 
	{
		return m_deviceType;
	}

private:
	unsigned int m_id;
	std::string m_os;
	bool m_active;
	DeviceType m_deviceType;


};



