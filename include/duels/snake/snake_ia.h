#ifndef SNAKE_IA_H
#define SNAKE_IA_H
#include "snake_game.h"
#include <vector>



typedef struct _node
{
    int x;
    int y;
    int F;
    int G;
    int H;
    struct _node* preNode;
}node;

class aStarFindPath
{
private:
    std::vector<node*> openList;
    std::vector<node*> closeList;
public:
    std::vector<COORDINATE> pathFinal;
    bool map[HEIGHT][WIDTH];
    aStarFindPath() ;
    ~aStarFindPath() ;
    int findMinNode();
    void findNeighbors(node* current,node* end);
    void AstarSerch (node* start,node* end);
    void initMap();
};


class snake_IA
{
public:
    snake_IA();
    snake_IA(int,snake_game);
    snake_game move1(int,snake_game snake);
    snake_game move2(int,snake_game snake);
    int obj1_x;
    int obj1_y;
    int obj2_x;
    int obj2_y;
    int closest_apple=0;
    bool obj1_reached=true;
    bool obj2_reached=true;
    bool obj1_already_eaten=false;
    bool obj2_already_eaten=false;
};




#endif // SNAKE_IA_H
