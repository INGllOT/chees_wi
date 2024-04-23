#include <QtWidgets>

class ChessBoardWidget : public QWidget {
public:
    ChessBoardWidget(QWidget *parent = nullptr) : QWidget(parent) {
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

        // Tworzenie pola planszy szachowej
        QGridLayout *gridLayout = new QGridLayout;
        for(int row = 0; row < 8; ++row) {
            for(int col = 0; col < 8; ++col) {
                QPushButton *button = new QPushButton(this);
                button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku


                // Ustawienie figur na planszy
                if(row == 0 || row == 7) {
                    const char* piece = " ";
                    if(row == 0) {
                        piece = startingPosition[row][col].toLatin1();
                    } else if(row == 7) {
                        piece = startingPosition[row][col].toUpper().toLatin1();
                    }
                    button->setText(QString(piece));
                } else if(row == 1 || row == 6) {
                    button->setText("P");
                }


                if((row + col) % 2 == 0) {
                    button->setStyleSheet("background-color: white;");
                } else {
                    button->setStyleSheet("background-color: gray;");
                }
                gridLayout->addWidget(button, row, col);
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

public:
    const QString startingPosition[8] = {"rnbqkbnr", "pppppppp", "        ", "        ",
                                         "        ", "        ", "PPPPPPPP", "RNBQKBNR"};
};
