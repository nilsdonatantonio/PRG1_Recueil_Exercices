//
// Created by enigma on 18.11.23.
//
enum class Direction {HAUT, BAS, GAUCHE, DROITE};

struct Coord {
    int x = 0;
    int y = 0;
};

using Point = Coord;

void deplacer(Point point, Direction direction){
    switch(direction){
        case Direction::HAUT :
            point.y++;
            break;
        case Direction::BAS :
            point.y--;
            break;
        case Direction::GAUCHE :
            point.x--;
            break;
        case Direction::DROITE :
            point.x++;
            break;

    }
}

int main(){

}