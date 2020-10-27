
#include"common.h"
#include"cuboid.h"
#include"rectangle.h"


int main()
{
	rectangle* rectangles = nullptr;
	int amountOfRectangles;
	std::cout << "input the number of rectangles: " << std::endl;
	std::cin >> amountOfRectangles;
	std::cout << "input the parametrs of rectangles: " << std::endl;
	rectangles = new rectangle[amountOfRectangles];


	cuboid* cuboids = nullptr;
	int amountOfCuboids;
	std::cout << "input the number of Cuboids: " << std::endl;
	std::cin >> amountOfCuboids;
	std::cout << "input the parametrs of cuboids: " << std::endl;
	cuboids = new cuboid[amountOfCuboids];
	float averageSpace=0;
	for (int i = 0; i < amountOfRectangles; i++)
	{
		averageSpace += rectangles[i].GetSpace(NO_REPLY);
	}
	std::cout << std::endl;
	averageSpace /= amountOfRectangles;
	int numberOfRectanglesWithAtLeastAverageSpace = 0;
	std::cout << "Average Space is " << averageSpace << std::endl;
	for (int i = 0; i < amountOfRectangles; i++)
	{
		if (rectangles[i].GetSpace(NO_REPLY) >= averageSpace)
		{
			std::cout << "space of rectangle # " << i+1 <<" is "<<rectangles[i].GetSpace(NO_REPLY)<< " and is >= average space"<< std::endl;
			numberOfRectanglesWithAtLeastAverageSpace++;
		}
		else
			std::cout << "space of rectangle # " << i + 1 << " is " << rectangles[i].GetSpace(NO_REPLY) << " and is < average space" << std::endl;
	}
	std::cout <<std::endl<< "the total amount of rectangles with more space than average is: " << numberOfRectanglesWithAtLeastAverageSpace << std::endl<<std::endl;
	int numberOfCuboidsThatAreCubes = 0;
	for (int i = 0; i < amountOfCuboids;i++)
		{
			if ((cuboids[i].m_height == cuboids[i].m_width) && (cuboids[i].m_width == cuboids[i].m_length))
			{
				numberOfCuboidsThatAreCubes++;
				std::cout << "cuboid # " << i+1 << " is a cube!" << std::endl;
			}
		}
		std::cout << "the amount of cubes is: " << numberOfCuboidsThatAreCubes << std::endl;
		return 0;
}