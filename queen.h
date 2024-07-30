#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen: public Piece
{
public:
    explicit Queen(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");
    virtual  bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece);
};

#endif // QUEEN_H
