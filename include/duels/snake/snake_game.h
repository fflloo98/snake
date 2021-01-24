#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <duels/snake/msg.h>
#include <vector>
#include<duels/utils/vector2d.h>


using namespace duels;
using namespace duels::snake;

struct COORDINATE
{
    int X;
    int Y;
};





class snake_game
{
public:
    snake_game();
    snake_game(displayMsg);

    displayMsg Create_display();
    COORDINATE Convert_To_Coordinate(int x, int y)
    {
        COORDINATE Coor;
        Coor.X=x;
        Coor.Y=y;
        return Coor;
    }
    COORDINATE Print_Coord(COORDINATE coor)
    {
        int x=coor.X;
        int y=coor.Y;
        std::cout<<"("<<x<<","<<y<<")"<<std::endl;
    }
    bool Test_Coord_in_List(COORDINATE coor,std::vector<COORDINATE> list)
    {
        bool Is_in=false;
        for (int i=0;i<list.size();i++)
        {
            if ((coor.X==list[i].X) && ((coor.Y==list[i].Y)))
            {
                Is_in = true;
            }
        }
        return Is_in;
    }
    bool isaliveSnake1(); //By snake1 we mean the snake whose head is located in (x1,y1)
    bool isaliveSnake2(); //By snake2 we mean the snake whose head is located in (x2,y2)
    void EatfoodSnake1(displayMsg);
    void EatfoodSnake2(displayMsg);
    void moveRandomlySnake1();
    void testbouffagepommeSnake1();
    void suicide_itself();
    void moveRandomlySnake2();
    bool eat_itself1(int);
    bool eat_itself2(int);
    void go_target1(int, int);
    void go_target2(int, int);
    displayMsg updateDisplay(displayMsg);
    std::vector<feedbackMsg> updatefeedback(displayMsg);

    int Snake1Length;
    std::vector<COORDINATE> Snake1ListOfCoordinate;
    int Snake2Length;
    std::vector <COORDINATE> Snake2ListOfCoordinate;
    std::vector <COORDINATE> Appleslist;

};

#endif // SNAKE_GAME_H
