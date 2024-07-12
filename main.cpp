#include <QtWidgets>
#include <QPixmap>
#include <QLabel>
#include "chessFiguresLayout.h"
#include "chessboardwidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Chess Game");
    window.resize(1000, 600);
    ChessBoardWidget *chessBoardWidget = new ChessBoardWidget(&window);
    ChessFiguresLayout *chessFiguresLayout = new ChessFiguresLayout(&window);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(chessBoardWidget, 1,1);
    mainLayout->addWidget(chessFiguresLayout, 1,1);

    window.setLayout(mainLayout);

    window.show();
    return app.exec();
}
