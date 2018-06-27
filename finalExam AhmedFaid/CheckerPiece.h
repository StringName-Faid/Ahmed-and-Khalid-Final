#ifndef CHECKERPIECE_H_INCLUDED
#define CHECKERPIECE_H_INCLUDED
#include "GamePiece.h"
#include "Coords.h"
#include <iostream>

class CheckerPiece: public Piece
{
private:
    bool color;
    bool king = true;

public:
    bool reachEnd(Piece piece);
    void piecemoveright(Piece piece);
    void piecemoveleft(Piece piece);
    void kingMoveBackright(Piece piece);
    void kingMoveBackleft(Piece piece);
    void eatPieceright(Piece piece);
    void eatPieceleft(Piece piece);

    ~CheckerPiece();
    CheckerPiece(Piece piece);
};

#endif // CHECKERPIECE_H_INCLUDED
