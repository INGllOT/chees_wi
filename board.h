#ifndef BOARD_H
#define BOARD_H


#include "piece.h"
class Board
{
public:
    Board();
    bool hasPiece(int x, int y) const;
    Piece* getPiece(int x, int y) const;
    void movePiece(int startX, int startY, int endX, int endY);
    void setPiece(int startX, int startY, Piece* piece);
    Piece* piece[8][8];

};

#endif // BOARD_H
