#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen: public Piece
{
public:
    explicit Queen(int x, int y, const QPixmap& pixmap, QWidget* parent = nullptr, const QString& color = "");

};

#endif // QUEEN_H
