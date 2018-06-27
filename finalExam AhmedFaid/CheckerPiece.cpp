#include "CheckerPiece.h"

bool CheckerPiece::reachEnd(Piece piece)
{
    if(position.y == 8)
        king = true;
}
void CheckerPiece::piecemoveright(Piece piece)
{
   piece.position.y++;
   piece.position.x++;
   reachEnd(piece);
}
void CheckerPiece::piecemoveleft(Piece piece)
{
   piece.position.y++;
   piece.position.x--;
   reachEnd(piece);
}
void CheckerPiece::kingMoveBackleft(Piece piece)
{
    piece.position.y--;
    piece.position.x--;
}

void CheckerPiece::eatPieceright(Piece piece)
{
    piece.position.y+2;
    piece.position.x+2;
}

void CheckerPiece::eatPieceleft(Piece piece)
{
    piece.position.y+2;
    piece.position.x-2;
    reachEnd(piece);
}

CheckerPiece::~CheckerPiece()
{
    std::cout << "Game Over";
    //close window
}

CheckerPiece::CheckerPiece()
{
    piece.position.x = 0;
    piece.position.y = 0;
    color = 1;

}

CheckerPiece::CheckerPiece(color c, Coords p){

}




//istream& operator<<(std::istream& lhs, CheckerPiece& rhs)
//{

//}
