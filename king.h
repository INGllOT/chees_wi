#ifndef KING_H
#define KING_H

#include "piece.h"
class King : public Piece
{
public:
    explicit King(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");
    virtual  bool isValidMove(int startXRow,int  startYColumn, int endXRow, int endYColumn, Piece* destinationPiece, Piece* movingPiece, QGridLayout *gridLayout);

};

#endif // KING_H
