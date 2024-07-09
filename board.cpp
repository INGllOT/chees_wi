#include "board.h"

Board::Board()
{

}


bool Board::hasPiece(int x, int y) const {
    return board[x][y] != nullptr;
}

Piece* Board::getPiece(int x, int y) const {
    return board[x][y];
}

void Board::movePiece(int startX, int startY, int endX, int endY) {
    board[endX][endY] = board[startX][startY];
    board[startX][startY] = nullptr;
}
