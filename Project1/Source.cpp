
#include"common.h"
#include"cuboid.h"
#include"rectangle.h"


int main()
{
	rectangle* rectangles = nullptr;
	int amountOfRectangles;
	std::cout << "input the number of rectangles: " << std::endl;
	std::cin >> amountOfRectangles;
	rectangles = new rectangle[amountOfRectangles];


	cuboid* cuboids = nullptr;
	int amountOfCuboids;
	std::cout << "input the number of Cuboids: " << std::endl;
	std::cin >> amountOfCuboids;
	cuboids = new cuboid[amountOfCuboids];
	float averageSpace=0;
	for (int i = 0; i < amountOfRectangles; i++)
	{
		averageSpace += rectangles[i].GetSpace(NO_REPLY);
	}
	std::cout << std::endl;
	averageSpace /= amountOfRectangles;
	int count1 = 0;
	for (int i = 0; i < amountOfRectangles; i++)
	{
		if (rectangles[i].GetSpace(NO_REPLY) >= averageSpace)
		{
			std::cout << "space of rectangle # " << i+1 << " >= average space" << std::endl;
			count1++;
		}
	}
	std::cout <<std::endl<< "the total amount of rectangles with more space than average is: " << count1 << std::endl;
	int count2 = 0;
		for (int i = 0; i < amountOfCuboids;i++)
		{
			if ((cuboids[i].m_height == cuboids[i].m_width) && (cuboids[i].m_width == cuboids[i].m_length))
			{
				count2++;
				std::cout << "cuboid # " << i+1 << " is a cube!" << std::endl;
			}
		}
		std::cout << "the amount of cubes is: " << count2 << std::endl;
}