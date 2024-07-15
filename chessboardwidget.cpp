#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessboardwidget.h"


ChessBoardWidget::ChessBoardWidget(QWidget *parent) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QHBoxLayout *mainLayout = new QHBoxLayout;

        // Dodawanie planszy i przycisku z nazwą gracza
        QPushButton *playerButton = new QPushButton("", this);
        playerButton->setFlat(true);
        playerButton->setStyleSheet("font-weight: bold; background-color: lightblue;");
        playerButton->setFixedSize(180, 40); // Ustawienie rozmiaru przycisku
        playerButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        playerButton->setEnabled(false);

        // Dodanie przycisku resetu
        QPushButton *resetButton = new QPushButton("Reset", this);
        resetButton->setFixedSize(100, 40); // Ustawienie rozmiaru przycisku

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

        layout->addWidget(playerButton, 0, Qt::AlignCenter);
        layout->addLayout(mainLayout);
        layout->addWidget(resetButton, 0, Qt::AlignCenter);
        setLayout(layout);
}

QGridLayout* ChessBoardWidget::returnGridLayoutFromBoardMetrix(){
    gridLayout = new QGridLayout;

    for(int row = 0; row < 8; ++row) {
        for(int col = 0; col < 8; ++col) {

            //Kolor planszy
            QLabel *square = new QLabel(this);
            square->setFixedSize(60, 60);

            if((row + col) % 2 == 0) {
                square->setStyleSheet("background-color: gray;");
            } else {
                square->setStyleSheet("background-color: white;");
            }

            // gridLayout->addWidget(board.piece[row][col], row, col);
            gridLayout->addWidget(square, row, col);
        }
    }

    return gridLayout;
}


