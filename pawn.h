#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn: public Piece
{
public:
    explicit Pawn(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");

};


#endif // PAWN_H
