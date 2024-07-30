#ifndef CHESSFIGURESLAYOUT_H
#define CHESSFIGURESLAYOUT_H

#include "board.h"
#include <QtWidgets>
#include <QPixmap>
#include <QLabel>

class ChessFiguresLayout : public QWidget{
public:
    ChessFiguresLayout(QWidget *parent = nullptr);

private:
    // Member variables
    QVBoxLayout* layout_;
    QHBoxLayout* mainLayout_;
    QPushButton* playerButton_;
    QPushButton* resetButton_;
    QGridLayout *gridLayout;
    QGridLayout *capturedWhiteLeftLayout;
    QGridLayout *capturedBlackRightLayout;
    QGridLayout* returnGridLayoutFromBoardMetrix();
    Board board;

    int selectedX, selectedY;

    int leftX = 0;
    int leftY = 0;

    int rightX = 0;
    int rightY = 0;

    bool pieceSelected;


    void handleResetButtonClick();
    void clearCapturedPieces();
    void clearChessBoard();
    void initializeCapturedWhiteLeftLayout();
    void initializeCapturedBlackRightLayout();
    void onPieceClicked(int row, int col);
    void initializeBoard();

private slots:
    void resetGame();

};

#endif // CHESSFIGURESLAYOUT_H
