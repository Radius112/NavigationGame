#include <iostream>
#include <conio.h>
#include <string>

//macros for the movement
#define KEY_UP  72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120
//the map
char place[17] = {'e','e' , 'e' ,'s' ,'c','d',
				 'f' ,'y' , 'e' ,'u' ,'l' ,
				 'a' , 'h', 'e' ,'e' ,'e' ,'e' };


int main() {

	std::cout << "\n";
	std::string playerName;
	std::cout << "Enter Player Name: \n\n";
	std::cin >> playerName;
	//holder is the player position
	//the other ones are self explanatory
	int holder = 0;
	int down = 6;
	int up = 5;

	for (int i = 0; i < 100; i++)
	
		switch (_getch()) {
		
		case KEY_UP:
			std::cout << playerName << " GOES UP\n\n";
			place[holder -= up];
			std::cout << place[holder ] << "\t";
		
	break;
		case KEY_DOWN:
			std::cout << playerName << " GOES DOWN\n\n";
			place[holder += down];
			up++;
			std::cout << place[holder] << "\t";
			
			break;
		case KEY_RIGHT:
			std::cout << playerName << " GOES RIGHT\n\n";

			place[holder];
			holder++;
			std::cout << place[holder] << "\t";
			up++;
		
			break;
		case KEY_LEFT:
			std::cout << playerName << " GOES LEFT\n\n";
			holder--;


			std::cout << place[holder] << "\t";
			
		
			break;
			break;

		
            }
		}



