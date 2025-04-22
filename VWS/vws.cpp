#include "vws.h"
#include <QMessageBox>
#include "utils.h"

// public ----------------------------------------------------------------------------------------------------
VectorWeaveStudio::VectorWeaveStudio(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);

    // Menus
    connect(actionExit,  &QAction::triggered, this, &VectorWeaveStudio::close);
    connect(actionOpen,  &QAction::triggered, this, &VectorWeaveStudio::openFile);
    connect(actionSave,  &QAction::triggered, this, &VectorWeaveStudio::saveFile);
    connect(actionClose, &QAction::triggered, this, &VectorWeaveStudio::closeFile);
    connect(actionCut,   &QAction::triggered, this, &VectorWeaveStudio::cut);
    connect(actionCopy,  &QAction::triggered, this, &VectorWeaveStudio::copy);
    connect(actionPaste, &QAction::triggered, this, &VectorWeaveStudio::paste);
    connect(actionAbout, &QAction::triggered, this, &VectorWeaveStudio::about);

    // Tiles
    const auto tileSetup = [this](int x, int y, QPushButton* button) {
        connect(button, &QPushButton::clicked, this, [this, x, y, button]() { renderTile(x, y, *button); });
        m_tiles.insert(button);
        renderTile(x, y, *button);
    };

    tileSetup(1, 1, f1_1);
    tileSetup(2, 1, f2_1);
    tileSetup(3, 1, f3_1);
    tileSetup(4, 1, f4_1);
    tileSetup(5, 1, f5_1);
    tileSetup(6, 1, f6_1);
    tileSetup(7, 1, f7_1);
    tileSetup(8, 1, f8_1);
    tileSetup(9, 1, f9_1);

    tileSetup(1, 2, f1_2);
    tileSetup(2, 2, f2_2);
    tileSetup(3, 2, f3_2);
    tileSetup(4, 2, f4_2);
    tileSetup(5, 2, f5_2);
    tileSetup(6, 2, f6_2);
    tileSetup(7, 2, f7_2);
    tileSetup(8, 2, f8_2);
    tileSetup(9, 2, f9_2);

    tileSetup(1, 3, f1_3);
    tileSetup(2, 3, f2_3);
    tileSetup(3, 3, f3_3);
    tileSetup(4, 3, f4_3);
    tileSetup(5, 3, f5_3);
    tileSetup(6, 3, f6_3);
    tileSetup(7, 3, f7_3);
    tileSetup(8, 3, f8_3);
    tileSetup(9, 3, f9_3);

    tileSetup(1, 4, f1_4);
    tileSetup(2, 4, f2_4);
    tileSetup(3, 4, f3_4);
    tileSetup(4, 4, f4_4);
    tileSetup(5, 4, f5_4);
    tileSetup(6, 4, f6_4);
    tileSetup(7, 4, f7_4);
    tileSetup(8, 4, f8_4);
    tileSetup(9, 4, f9_4);

    tileSetup(1, 5, f1_5);
    tileSetup(2, 5, f2_5);
    tileSetup(3, 5, f3_5);
    tileSetup(4, 5, f4_5);
    tileSetup(5, 5, f5_5);
    tileSetup(6, 5, f6_5);
    tileSetup(7, 5, f7_5);
    tileSetup(8, 5, f8_5);
    tileSetup(9, 5, f9_5);

    tileSetup(1, 6, f1_6);
    tileSetup(2, 6, f2_6);
    tileSetup(3, 6, f3_6);
    tileSetup(4, 6, f4_6);
    tileSetup(5, 6, f5_6);
    tileSetup(6, 6, f6_6);
    tileSetup(7, 6, f7_6);
    tileSetup(8, 6, f8_6);
    tileSetup(9, 6, f9_6);

    tileSetup(1, 7, f1_7);
    tileSetup(2, 7, f2_7);
    tileSetup(3, 7, f3_7);
    tileSetup(4, 7, f4_7);
    tileSetup(5, 7, f5_7);
    tileSetup(6, 7, f6_7);
    tileSetup(7, 7, f7_7);
    tileSetup(8, 7, f8_7);
    tileSetup(9, 7, f9_7);

    tileSetup(1, 8, f1_8);
    tileSetup(2, 8, f2_8);
    tileSetup(3, 8, f3_8);
    tileSetup(4, 8, f4_8);
    tileSetup(5, 8, f5_8);
    tileSetup(6, 8, f6_8);
    tileSetup(7, 8, f7_8);
    tileSetup(8, 8, f8_8);
    tileSetup(9, 8, f9_8);

    tileSetup(1, 9, f1_9);
    tileSetup(2, 9, f2_9);
    tileSetup(3, 9, f3_9);
    tileSetup(4, 9, f4_9);
    tileSetup(5, 9, f5_9);
    tileSetup(6, 9, f6_9);
    tileSetup(7, 9, f7_9);
    tileSetup(8, 9, f8_9);
    tileSetup(9, 9, f9_9);

    tileSetup(1, 10, f1_10);
    tileSetup(2, 10, f2_10);
    tileSetup(3, 10, f3_10);
    tileSetup(4, 10, f4_10);
    tileSetup(5, 10, f5_10);
    tileSetup(6, 10, f6_10);
    tileSetup(7, 10, f7_10);
    tileSetup(8, 10, f8_10);
    tileSetup(9, 10, f9_10);

    tileSetup(1, 11, f1_11);
    tileSetup(2, 11, f2_11);
    tileSetup(3, 11, f3_11);
    tileSetup(4, 11, f4_11);
    tileSetup(5, 11, f5_11);
    tileSetup(6, 11, f6_11);
    tileSetup(7, 11, f7_11);
    tileSetup(8, 11, f8_11);
    tileSetup(9, 11, f9_11);
}

// public ----------------------------------------------------------------------------------------------------
VectorWeaveStudio::~VectorWeaveStudio()
{
}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::openFile()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::saveFile()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::closeFile()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::cut()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::copy()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::paste()
{

}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::renderTile(int x, int y, QPushButton& tile)
{
    const QString text = QSL("Scroll %1.%2").arg(x).arg(y);
    tile.setText(text);
}

// public ----------------------------------------------------------------------------------------------------
void VectorWeaveStudio::about()
{
    QMessageBox::information(this, QSL("Vector Weave Studio"),
        QSL("Vector Weave Studio helps you organize your digital assets visually, without resorting to the tyranny of naming things or using a file system. Consider Supporting development by donating!\n\nVersion: 0.0.1\n(c) 2025 Phext, Inc."));
}
