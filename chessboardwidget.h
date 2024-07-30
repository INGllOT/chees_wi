#ifndef CHESSBOARDWIDGET_H
#define CHESSBOARDWIDGET_H

#include "board.h"
#include <QtWidgets>
#include <QPixmap>
#include <QLabel>

class ChessBoardWidget : public QWidget {
public:
    ChessBoardWidget(QWidget *parent = nullptr);

private:
    // Member variables
    QVBoxLayout* layout_;
    QHBoxLayout* mainLayout_;
    QPushButton* playerButton_;
    QPushButton* resetButton_;
    QGridLayout *gridLayout;
    QGridLayout* returnGridLayoutFromBoardMetrix();
    Board board;

    int selectedX, selectedY;
    bool pieceSelected;


};

#endif // CHESSBOARDWIDGET_H
