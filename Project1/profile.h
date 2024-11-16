#pragma once
#include "User.h"
#include "UserList.h"
#include "page.h"
#include <string>

class profile
{
public:
	void init(User owner);
	void clear();
	User getOwner();
	void setStatus(std::string new_status);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);
	std::string getPage();
	std::string getFriends();
	std::string getFriendsWithSameNameLength();

private:
	User m_owner;
	UserList m_userList;
	page m_page;

};

