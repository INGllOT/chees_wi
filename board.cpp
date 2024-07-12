#include "board.h"

Board::Board()
{

}


bool Board::hasPiece(int x, int y) const {
    return piece[x][y] != nullptr;
}

Piece* Board::getPiece(int x, int y) const {
    return piece[x][y];
}

void Board::movePiece(int startX, int startY, int endX, int endY) {
    //Piece *buffor = piece[endX][endY];
    piece[endX][endY] = piece[startX][startY];
    piece[startX][startY] = nullptr;

    // piece[startX][startY]->setPosition(endX, endY);
    // piece[endX][endY]->setPosition(startX, startY);

}

void Board::setPiece(int startX, int startY, Piece* piece) {
    this->piece[startX][startY] = piece;
}
