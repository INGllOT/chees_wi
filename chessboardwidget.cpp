#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessboardwidget.h"
#include "pawn.h"


ChessBoardWidget::ChessBoardWidget(QWidget *parent) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QHBoxLayout *mainLayout = new QHBoxLayout;

        // Dodawanie planszy i przycisku z nazwą gracza
        QPushButton *playerButton = new QPushButton("Player's Turn: White", this);
        playerButton->setFlat(true);
        playerButton->setStyleSheet("font-weight: bold; background-color: lightblue;");
        playerButton->setFixedSize(180, 40); // Ustawienie rozmiaru przycisku
        playerButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        playerButton->setEnabled(false);

        // Dodanie przycisku resetu
        QPushButton *resetButton = new QPushButton("Reset", this);
        resetButton->setFixedSize(100, 40); // Ustawienie rozmiaru przycisku

        connect(resetButton, &QPushButton::clicked, this, &ChessBoardWidget::handleResetButtonClick);


        // Tworzenie pola planszy szachowej
        QGridLayout *gridLayout = new QGridLayout;
        for(int row = 0; row < 8; ++row) {
            for(int col = 0; col < 8; ++col) {
                Pawn *pawn = nullptr; // Zmienna przechowująca wskaźnik na pionka

                // Ustawienie obrazka pionka na polu planszy
                if(row == 0 && (col == 0 || col == 7)) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook.png"), this, "background-color: gray;");
                    }
                } else if(row == 0 && (col == 6 || col == 1)) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse.png"), this, "background-color: gray;");
                    }
                } else if(row == 0 && (col == 2 || col == 5)) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop.png"), this, "background-color: gray;");
                    }
                } else if(row == 0 && col == 3) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen.png"), this, "background-color: gray;");
                    }
                } else if(row == 0 && col == 4) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king.png"), this, "background-color: gray;");
                    }
                } else if(row == 1) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && (col == 6 || col == 1)) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/horse1.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && col == 0) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && col == 7) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/rook1.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && (col == 2 || col == 5)) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/bishop1.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && col == 3) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/queen1.png"), this, "background-color: gray;");
                    }
                } else if(row == 7 && col == 4) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/king1.png"), this, "background-color: gray;");
                    }
                } else if(row == 6) {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn1.png"), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap("D:/Dev/repoQt/chees_wi/resources/pawn1.png"), this, "background-color: gray;");
                    }
                } else {
                    if((row + col) % 2 == 0) {
                        pawn = new Pawn(row, col, QPixmap(""), this, "background-color: white;");
                    } else {
                        pawn = new Pawn(row, col, QPixmap(""), this, "background-color: gray;");
                    }
                }
                connect(pawn, &Pawn::clickedPawn, [=](int x, int y){
                    qDebug() << "Hello World! Pawn clicked at position: (" << x << ", " << y << ")";
                });
                gridLayout->addWidget(pawn, row, col);
            }
        }

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

void ChessBoardWidget::handleResetButtonClick() {
    qDebug() << "Hello World";
}
