/*
    Current issue : Music
    Problem : N/A
*/

#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
//#include <mmsystem.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

//#pragma comment(lib,"Winmm.lib")

void run();
void printMap();
int printScore(int pts);
void initMap();
void move(int dx, int dy);
void update();
void changeDirection(char key);
void clearScreen();
void generateFood();

char getMapValue(int value);

// !Map dimensions!
const int mapwidth = 56;    //actually height
const int mapheight = 79;  //actually width (48)

const int size = mapwidth * mapheight;

// The tile values for the map
int map[size];

// Snake head details
int headxpos;       //x coordinate for snake head
int headypos;      //y coordinate for snake head
int direction;    //direction of snake head

// Amount of food the snake has/ body LENGTH
int food = 10;    //body length & ultimately the score. Default score is 5

// Determine if game is running
bool running;

int main()
{
    int choice;
    std::cout<<"                                  EPILEPTIC SNAKE        "<<std::endl<<std::endl;
    std::cout<<"                                      Controls :    "<<std::endl<<std::endl;
    std::cout<<"                                         W          "<<std::endl;
    std::cout<<"                                      A  +  D       "<<std::endl;
    std::cout<<"                                         S          "<<std::endl<<std::endl;
    std::cout<<"Warning : Not suitable for people prone to epileptic seizures"<<std::endl<<std::endl;
    std::cout<<"Drag this window to occupy the right half of the screen"<<std::endl<<std::endl;
    A:
    std::cout<<"Press 1 to start the game & 0 to exit....."<<std::endl;
    std::cin>>choice;

    if (choice == 0)
        exit (0);
    else if (choice == 1)
        run();
    else
    {
        std::cout<<"Oof, wrong entry. Try again"<<std::endl;
        goto A;
    }


    return 0;
}

// Main game function
void run()
{
    D:
    char choice;

    // Initialize the map
    initMap();
    running = true;
    initwindow(685,698,"Live Score");

    /*
    //open mp3 file:

    mciSendString("open D:\5354_XI 'A'\Grade XI Project\Project - Snake\super_mario_trap.wav", NULL, 0, NULL);

    //play mp3 file:

    mciSendString("play D:\5354_XI 'A'\Grade XI Project\Project - Snake\super_mario_trap.wav", NULL, 0, NULL);
    */


    //PlaySoundA((LPCSTR)"D:\5354_XI 'A'\Grade XI Project\Project - Snake\super_mario_trap.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);


    while (running) {
        // If a key is pressed
        if (_kbhit()) {
            // Change to direction determined by key pressed
            changeDirection(_getch()); // add '_' to get the new version of the function
        }
        // Update the map
        update();

        // Clear the ASCII screen
        clearScreen();

        // Print the map
        printMap();

        // Print the score
        printScore(food-10);

        // wait 0.5 seconds
        delay(25/food);

    }

    // Print out game over text
    clearScreen();
    std::cout << "                  Game over!" << std::endl<<std::endl;
    B:
    std::cout << " To end the game, Press 'F' to pay respects/ 'R' return to the previous game/ 'B' for BEGONE THOT  (With a higher difficulty) :"<<std::endl;
    std::cin >> choice;
    if (choice == 'F'||choice == 'B')
    {
        std::cout << "Your respects have been paid..." << std::endl;
        exit(0);
    }
    else if (choice == 'R')
        goto D;
    else
    {
        std::cout << "Invalid entry. Try again ..." << std::endl;
        goto B;
    }
     // Stop console from closing instantly
    std::cin.ignore();
}

// Changes snake direction from input
void changeDirection(char key) {
    /*
      W
    A + D
      S

      1
    4 + 2
      3
    */
    switch (key) {
    case 'w': case 'W':
        if (direction != 2) direction = 0;
        break;
    case 'd': case 'D':
        if (direction != 3) direction = 1;
        break;
    case 's': case 'S':
        if (direction != 4) direction = 2;
        break;
    case 'a': case 'A':
        if (direction != 5) direction = 3;
        break;
    }
}

// Moves snake head to new location
void move(int dx, int dy) {
    // determine new head position
    int newx = headxpos + dx;
    int newy = headypos + dy;

    // Check if there is food at location
    if (map[newx + newy * mapwidth] == -2) {

        food++;   // Increase food value (body length) and !score updated!

        // Generate new food on map
        generateFood();
    }

    // Check location is free
    else if (map[newx + newy * mapwidth] != 0) {
        running = false;
    }

    // Move head to new location
    headxpos = newx;
    headypos = newy;
    map[headxpos + headypos * mapwidth] = food + 1;

}

// Clears screen
void clearScreen() {
    // Clear the screen
    system("cls");
}

// Generates new food on map
void generateFood() {
    int x = 0;
    int y = 0;
    do {
        // Generate random x and y values within the map
        x = rand() % (mapwidth - 2) + 1;
        y = rand() % (mapheight - 2) + 1;

        // If location is not free try again
    } while (map[x + y * mapwidth] != 0);

    // Place new food
    map[x + y * mapwidth] = -2;
}

// Updates the map
void update() {
    // Move in direction indicated
    switch (direction) {
    case 0: move(-1, 0);
        break;
    case 1: move(0, 1);
        break;
    case 2: move(1, 0);
        break;
    case 3: move(0, -1);
        break;
    }

    // Reduce snake values on map by 1
    for (int i = 0; i < size; i++) {
        if (map[i] > 0) map[i]--;
    }
}

// Initializes map
void initMap()
{
    // Places the initial head location in middle of map
    headxpos = mapwidth / 2;
    headypos = mapheight / 2;
    map[headxpos + headypos * mapwidth] = 1;

    // Places top and bottom walls
    for (int x = 0; x < mapwidth; ++x) {
        map[x] = -1;
        map[x + (mapheight - 1) * mapwidth] = -1;
    }

    // Places left and right walls
    for (int y = 0; y < mapheight; y++) {
        map[0 + y * mapwidth] = -1;
        map[(mapwidth - 1) + y * mapwidth] = -1;
    }

    // Generates first food
    generateFood();
}

// Prints the map to console
void printMap()
{
    for (int x = 0; x < mapwidth; ++x) {
        for (int y = 0; y < mapheight; ++y) {
            // Prints the value at current x,y location
            std::cout << getMapValue(map[x + y * mapwidth]);
        }
        // Ends the line for next x value
        std::cout << std::endl;
    }
}

// Returns graphical character for display from map value
char getMapValue(int value)
{
    // Returns a part of snake body
    if (value > 0) return '#'; // Snake body

    switch (value) {
        // Return wall
    case -1: return '+'; // Boundary. same for all walls  NOTE: Find a better alternative for the wall
        // Return food
    case -2: return '*'; // Food
    }
}

// Opens a new graphics window to display the score live
int printScore(int pts)
{
    int scr = 0, ep1;
    int gd = DETECT, gm;
    char scrfin[16], fd2[4], fd[4], ep[3];

        itoa(pts,fd,10);
        itoa(pts+10,fd2,10);
        scr += (pts*6250);
        itoa(scr,scrfin,10);
        ep1 = (pts+10)*4;
        itoa(ep1,ep,10);

    // Prints the boundary lines

        line(10,10,10,688);
        line(10,688,675,688);
        line(675,688,675,10);
        line(675,10,10,10);


    // Prints the primary contents of the score window

        settextstyle(8,0,1);
        outtextxy(265,15,"Score :");
        settextstyle(8,0,10);
        outtextxy(110,85,scrfin);
        settextstyle(8,0,1);
        settextstyle(8,0,1);
        outtextxy(265,245,"Dots Consumed :");
        settextstyle(8,0,7);
        outtextxy(255,295,fd);
        settextstyle(8,0,1);
        outtextxy(265,420,"Current Length :");
        settextstyle(8,0,7);
        outtextxy(2551,470,fd2);
        settextstyle(8,0,5);
        outtextxy(100,600,"Epilepsy");
        settextstyle(8,0,5);
        outtextxy(400,600,ep);

}


