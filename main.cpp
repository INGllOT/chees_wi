#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessboardwidget.h"


// class ChessBoardWidget : public QWidget {
// public:
//     ChessBoardWidget(QWidget *parent = nullptr) : QWidget(parent) {
//         QVBoxLayout *layout = new QVBoxLayout(this);
//         QHBoxLayout *mainLayout = new QHBoxLayout;

//         // Dodawanie planszy i przycisku z nazwą gracza
//         QPushButton *playerButton = new QPushButton("Player's Turn: White", this);
//         playerButton->setFlat(true);
//         playerButton->setStyleSheet("font-weight: bold; background-color: lightblue;");
//         playerButton->setFixedSize(180, 40); // Ustawienie rozmiaru przycisku
//         playerButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
//         playerButton->setEnabled(false);

//         // Dodanie przycisku resetu
//         QPushButton *resetButton = new QPushButton("Reset", this);
//         resetButton->setFixedSize(100, 40); // Ustawienie rozmiaru przycisku

//         // Tworzenie pola planszy szachowej
//         QGridLayout *gridLayout = new QGridLayout;
//         for(int row = 0; row < 8; ++row) {
//             for(int col = 0; col < 8; ++col) {
//                 QPushButton *button = new QPushButton(this);
//                 button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku

//                 if((row + col) % 2 == 0) {
//                     button->setStyleSheet("background-color: white;");
//                 } else {
//                     button->setStyleSheet("background-color: gray;");
//                 }
//                 gridLayout->addWidget(button, row, col);
//             }
//         }

//         // Tworzenie pól na zbite figury po lewej stronie planszy
//         QGridLayout *capturedWhiteLeftLayout = new QGridLayout;

//         for(int row = 0; row < 8; ++row) {
//             for(int col = 0; col < 2; ++col) {
//                 QPushButton *button = new QPushButton(this);
//                 button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku
//                 if((row + col) % 2 == 0) {
//                     button->setStyleSheet("background-color: white;");
//                 } else {
//                     button->setStyleSheet("background-color: gray;");
//                 }
//                 capturedWhiteLeftLayout->addWidget(button, row, col);
//             }
//         }

//         // Tworzenie pól na zbite figury po prawej stronie planszy
//         QGridLayout *capturedBlackRightLayout = new QGridLayout;
//         for(int row = 0; row < 8; ++row) {
//             for(int col = 0; col < 2; ++col) {
//                 QPushButton *button = new QPushButton(this);
//                 button->setFixedSize(60, 60); // Ustawienie rozmiaru przycisku
//                 if((row + col) % 2 == 0) {
//                     button->setStyleSheet("background-color: white;");
//                 } else {
//                     button->setStyleSheet("background-color: gray;");
//                 }
//                 capturedBlackRightLayout->addWidget(button, row, col);
//             }
//         }

//         mainLayout->addLayout(capturedWhiteLeftLayout);
//         mainLayout->addLayout(gridLayout);
//         mainLayout->addLayout(capturedBlackRightLayout);

//         layout->addWidget(playerButton, 0, Qt::AlignCenter);
//         layout->addLayout(mainLayout);
//         layout->addWidget(resetButton, 0, Qt::AlignCenter);
//         setLayout(layout);
//     }

// };

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Chess Game");
    window.resize(1000, 600);
    ChessBoardWidget *chessBoardWidget = new ChessBoardWidget(&window);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(chessBoardWidget);
    window.setLayout(mainLayout);

    window.show();
    return app.exec();
}
