#include "page.h"
#include <string>

void page::init() 
{
	m_posts = "";
	m_status = "";
}
std::string page::getPosts() 
{
	return m_posts;
}
std::string page::getStatus() 
{
	return m_status;
}
void page::clearPage() 
{
	m_posts = "";
}
void page::setStatus(std::string status) 
{
	m_status = status;
}
void page::addLineToPosts(std::string new_line) 
{
	m_posts = m_posts + "\n" + new_line;
}
