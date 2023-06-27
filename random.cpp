#include <fstream>
#include <iostream>

int main()
{
	/*
		Read every character of /dev/random until it adds up to hello world
	*/
	std::string compString = "Hello World\n";
	{
		std::ifstream rfile("/dev/random");
		std::string output = "";
		int index = 0;
		while(output != compString)
		{
			char inputChar;
			rfile.get(inputChar);
			if(compString[index] == inputChar) 
			{
				output += inputChar;
				std::cout << inputChar;
				++index;
			}
		}
		rfile.close();
	}
	/*
		Read every character of a random processes's memory until it adds up to hello world
	*/
	{
		
	}
	/*
		Read random characters of random files in random places on a system until it adds up to hello world
	*/
	{
		
	}
}
