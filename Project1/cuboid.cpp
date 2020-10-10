#include "cuboid.h"
#include "common.h"

cuboid::cuboid(const float& n_width, const float& n_length, const float& n_height):
	rectangle(n_width,n_length),m_height(n_height)
{

}

float cuboid::GetVolume()
{
	std::cout << "the Volume is: " << m_width * m_length*m_height << std::endl;
	return m_width * m_length * m_height;
}

void cuboid::GetSize()
{
	std::cout << "the width is: " << m_width << std::endl;
	std::cout << "the length is: " << m_length << std::endl;
	std::cout << "the height is: " << m_length << std::endl;
}
void cuboid::GetDiag()
{
	std::cout << "the diagonal length is: " << sqrt(pow(m_width, 2) + pow(m_length, 2)+ pow(m_height, 2)) << std::endl;

}
void cuboid::GetPerimetr()
{
	std::cout << "the perimetr is: " << 4*(m_width + m_length+m_height) << std::endl;
}
float cuboid::GetSpace(REPLY HAS_)
{
	std::cout << "the space is: " << 2*m_width * m_length+2*m_width*m_height + 2 * m_length * m_height << std::endl;
	return 2 * m_width * m_length + 2 * m_width * m_height + 2 * m_length * m_height;
}
cuboid::cuboid(): rectangle()
{
	std::cout << "input the height: ";
	std::cin >> m_height;
}
int cuboid::element_count = 0;
