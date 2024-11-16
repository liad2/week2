#include "profile.h"

void profile::init(User owner)
{
	m_owner = owner;
}
void profile::clear() 
{
	m_owner.clear();
	m_userList.clear();
	m_page.clearPage();



}
User profile::getOwner() 
{
	return m_owner;
}
void profile::setStatus(std::string new_status) 
{
	m_page.setStatus(new_status);
}
void profile::addPostToProfilePage(std::string post) 
{
	m_page.addLineToPosts(post);
}
void profile::addFriend(User friend_to_add) 
{
	m_userList.add(friend_to_add);
}
std::string profile::getPage() 
{
	std::string s = "Status: " + m_page.getStatus() + "\n"
		+ "*******************\n"
		+ "*******************\n"
		+ m_page.getPosts();
	return s;
}

std::string profile::getFriends() 
{
	std::string s;
	UserNode* node = m_userList.get_first();
	while (node != NULL) {
		s += node->get_data().getUserName();
		if (node->get_next() != NULL)
			s += ',';
		node = node->get_next();
	}
	return s;
}
std::string profile::getFriendsWithSameNameLength() 
{
	int len = m_owner.getUserName().length();
	std::string names = "";
	UserNode* node = m_userList.get_first();
	while (node != NULL) {
		if (node->get_data().getUserName().length() == len) {
			if (names.length() > 0)
				names += ',';
			names += node->get_data().getUserName();
		}
		node = node->get_next();
	}

}
