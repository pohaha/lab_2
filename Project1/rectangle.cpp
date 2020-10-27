#include "rectangle.h"
#include "common.h"


void rectangle::GetSize()
{
	std::cout << "the width is: " << m_width << std::endl;
	std::cout << "the length is: " << m_length << std::endl;
}

void rectangle::GetDiag()
{
	std::cout << "the diagonal length is: " << sqrt(pow(m_width,2 )+pow(m_length,2))<< std::endl;
}

void rectangle::GetPerimetr()
{
	std::cout << "the perimetr is: " << m_width*2+m_length*2 << std::endl;
}

float rectangle::GetSpace(REPLY hasReply=NO_REPLY)
{
	
	if(hasReply==WITH_REPLY)
		std::cout << "the space of "<<"is: " << m_width*m_length << std::endl;
	return m_width * m_length;
}


rectangle::rectangle(const float& n_width, const float& n_length):
	m_width(n_width),m_length(n_length)
{
}

rectangle::rectangle(bool that)
{
	std::cout << "input the width: ";
	std::cin >> m_width;
	std::cout << "input the length: ";
	std::cin >> m_length;
	if (that) std::cout << std::endl;
}

