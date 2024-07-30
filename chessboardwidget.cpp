#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessboardwidget.h"


ChessBoardWidget::ChessBoardWidget(QWidget *parent) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QHBoxLayout *mainLayout = new QHBoxLayout;

        returnGridLayoutFromBoardMetrix();

        // Tworzenie pól na zbite figury po lewej stronie planszy
        QGridLayout *capturedWhiteLeftLayout = new QGridLayout;
        for(int row = 0; row < 8; ++row) {
            for(int col = 0; col < 2; ++col) {
                QPushButton *button = new QPushButton(this);
                button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku
                if((row + col) % 2 == 0) {
                    button->setStyleSheet("background-color: white;");
                } else {
                    button->setStyleSheet("background-color: gray;");
                }
                capturedWhiteLeftLayout->addWidget(button, row, col);
            }
        }

        // Tworzenie pól na zbite figury po prawej stronie planszy
        QGridLayout *capturedBlackRightLayout = new QGridLayout;
        for(int row = 0; row < 8; ++row) {
            for(int col = 0; col < 2; ++col) {
                QPushButton *button = new QPushButton(this);
                button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku
                if((row + col) % 2 == 0) {
                    button->setStyleSheet("background-color: white;");
                } else {
                    button->setStyleSheet("background-color: gray;");
                }
                capturedBlackRightLayout->addWidget(button, row, col);
            }
        }

        mainLayout->addLayout(capturedWhiteLeftLayout);
        mainLayout->addLayout(gridLayout);
        mainLayout->addLayout(capturedBlackRightLayout);

        layout->addLayout(mainLayout);
        setLayout(layout);
}

QGridLayout* ChessBoardWidget::returnGridLayoutFromBoardMetrix(){
    gridLayout = new QGridLayout;

    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 8; ++col) {

            //Kolor planszy
            QLabel *square = nullptr;

            if((row + col) % 2 == 0) {
                square = new QLabel(this);
                square->setFixedSize(60, 60);
                square->setStyleSheet("background-color: white;");
            } else {
                square = new QLabel(this);
                square->setFixedSize(60, 60);
                square->setStyleSheet("background-color: gray;");
            }

            gridLayout->addWidget(square, row, col);
        }
    }

    return gridLayout;
}


