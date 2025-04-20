#include "vws.h"
#include <QMessageBox>

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
    connect(f1_1, &QPushButton::clicked, this, [this]() { renderTile(1, 1, *f1_1); });
    connect(f2_1, &QPushButton::clicked, this, [this]() { renderTile(2, 1, *f2_1); });
    connect(f3_1, &QPushButton::clicked, this, [this]() { renderTile(3, 1, *f3_1); });
    connect(f4_1, &QPushButton::clicked, this, [this]() { renderTile(4, 1, *f4_1); });
    connect(f5_1, &QPushButton::clicked, this, [this]() { renderTile(5, 1, *f5_1); });
    connect(f6_1, &QPushButton::clicked, this, [this]() { renderTile(6, 1, *f6_1); });
    connect(f7_1, &QPushButton::clicked, this, [this]() { renderTile(7, 1, *f7_1); });
    connect(f8_1, &QPushButton::clicked, this, [this]() { renderTile(8, 1, *f8_1); });
    connect(f9_1, &QPushButton::clicked, this, [this]() { renderTile(9, 1, *f9_1); });

    connect(f1_2, &QPushButton::clicked, this, [this]() { renderTile(1, 2, *f1_2); });
    connect(f2_2, &QPushButton::clicked, this, [this]() { renderTile(2, 2, *f2_2); });
    connect(f3_2, &QPushButton::clicked, this, [this]() { renderTile(3, 2, *f3_2); });
    connect(f4_2, &QPushButton::clicked, this, [this]() { renderTile(4, 2, *f4_2); });
    connect(f5_2, &QPushButton::clicked, this, [this]() { renderTile(5, 2, *f5_2); });
    connect(f6_2, &QPushButton::clicked, this, [this]() { renderTile(6, 2, *f6_2); });
    connect(f7_2, &QPushButton::clicked, this, [this]() { renderTile(7, 2, *f7_2); });
    connect(f8_2, &QPushButton::clicked, this, [this]() { renderTile(8, 2, *f8_2); });
    connect(f9_2, &QPushButton::clicked, this, [this]() { renderTile(9, 2, *f9_2); });

    connect(f1_3, &QPushButton::clicked, this, [this]() { renderTile(1, 3, *f1_3); });
    connect(f2_3, &QPushButton::clicked, this, [this]() { renderTile(2, 3, *f2_3); });
    connect(f3_3, &QPushButton::clicked, this, [this]() { renderTile(3, 3, *f3_3); });
    connect(f4_3, &QPushButton::clicked, this, [this]() { renderTile(4, 3, *f4_3); });
    connect(f5_3, &QPushButton::clicked, this, [this]() { renderTile(5, 3, *f5_3); });
    connect(f6_3, &QPushButton::clicked, this, [this]() { renderTile(6, 3, *f6_3); });
    connect(f7_3, &QPushButton::clicked, this, [this]() { renderTile(7, 3, *f7_3); });
    connect(f8_3, &QPushButton::clicked, this, [this]() { renderTile(8, 3, *f8_3); });
    connect(f9_3, &QPushButton::clicked, this, [this]() { renderTile(9, 3, *f9_3); });

    connect(f1_4, &QPushButton::clicked, this, [this]() { renderTile(1, 4, *f1_4); });
    connect(f2_4, &QPushButton::clicked, this, [this]() { renderTile(2, 4, *f2_4); });
    connect(f3_4, &QPushButton::clicked, this, [this]() { renderTile(3, 4, *f3_4); });
    connect(f4_4, &QPushButton::clicked, this, [this]() { renderTile(4, 4, *f4_4); });
    connect(f5_4, &QPushButton::clicked, this, [this]() { renderTile(5, 4, *f5_4); });
    connect(f6_4, &QPushButton::clicked, this, [this]() { renderTile(6, 4, *f6_4); });
    connect(f7_4, &QPushButton::clicked, this, [this]() { renderTile(7, 4, *f7_4); });
    connect(f8_4, &QPushButton::clicked, this, [this]() { renderTile(8, 4, *f8_4); });
    connect(f9_4, &QPushButton::clicked, this, [this]() { renderTile(9, 4, *f9_4); });

    connect(f1_5, &QPushButton::clicked, this, [this]() { renderTile(1, 5, *f1_5); });
    connect(f2_5, &QPushButton::clicked, this, [this]() { renderTile(2, 5, *f2_5); });
    connect(f3_5, &QPushButton::clicked, this, [this]() { renderTile(3, 5, *f3_5); });
    connect(f4_5, &QPushButton::clicked, this, [this]() { renderTile(4, 5, *f4_5); });
    connect(f5_5, &QPushButton::clicked, this, [this]() { renderTile(5, 5, *f5_5); });
    connect(f6_5, &QPushButton::clicked, this, [this]() { renderTile(6, 5, *f6_5); });
    connect(f7_5, &QPushButton::clicked, this, [this]() { renderTile(7, 5, *f7_5); });
    connect(f8_5, &QPushButton::clicked, this, [this]() { renderTile(8, 5, *f8_5); });
    connect(f9_5, &QPushButton::clicked, this, [this]() { renderTile(9, 5, *f9_5); });

    connect(f1_6, &QPushButton::clicked, this, [this]() { renderTile(1, 6, *f1_6); });
    connect(f2_6, &QPushButton::clicked, this, [this]() { renderTile(2, 6, *f2_6); });
    connect(f3_6, &QPushButton::clicked, this, [this]() { renderTile(3, 6, *f3_6); });
    connect(f4_6, &QPushButton::clicked, this, [this]() { renderTile(4, 6, *f4_6); });
    connect(f5_6, &QPushButton::clicked, this, [this]() { renderTile(5, 6, *f5_6); });
    connect(f6_6, &QPushButton::clicked, this, [this]() { renderTile(6, 6, *f6_6); });
    connect(f7_6, &QPushButton::clicked, this, [this]() { renderTile(7, 6, *f7_6); });
    connect(f8_6, &QPushButton::clicked, this, [this]() { renderTile(8, 6, *f8_6); });
    connect(f9_6, &QPushButton::clicked, this, [this]() { renderTile(9, 6, *f9_6); });

    connect(f1_7, &QPushButton::clicked, this, [this]() { renderTile(1, 7, *f1_7); });
    connect(f2_7, &QPushButton::clicked, this, [this]() { renderTile(2, 7, *f2_7); });
    connect(f3_7, &QPushButton::clicked, this, [this]() { renderTile(3, 7, *f3_7); });
    connect(f4_7, &QPushButton::clicked, this, [this]() { renderTile(4, 7, *f4_7); });
    connect(f5_7, &QPushButton::clicked, this, [this]() { renderTile(5, 7, *f5_7); });
    connect(f6_7, &QPushButton::clicked, this, [this]() { renderTile(6, 7, *f6_7); });
    connect(f7_7, &QPushButton::clicked, this, [this]() { renderTile(7, 7, *f7_7); });
    connect(f8_7, &QPushButton::clicked, this, [this]() { renderTile(8, 7, *f8_7); });
    connect(f9_7, &QPushButton::clicked, this, [this]() { renderTile(9, 7, *f9_7); });

    connect(f1_8, &QPushButton::clicked, this, [this]() { renderTile(1, 8, *f1_8); });
    connect(f2_8, &QPushButton::clicked, this, [this]() { renderTile(2, 8, *f2_8); });
    connect(f3_8, &QPushButton::clicked, this, [this]() { renderTile(3, 8, *f3_8); });
    connect(f4_8, &QPushButton::clicked, this, [this]() { renderTile(4, 8, *f4_8); });
    connect(f5_8, &QPushButton::clicked, this, [this]() { renderTile(5, 8, *f5_8); });
    connect(f6_8, &QPushButton::clicked, this, [this]() { renderTile(6, 8, *f6_8); });
    connect(f7_8, &QPushButton::clicked, this, [this]() { renderTile(7, 8, *f7_8); });
    connect(f8_8, &QPushButton::clicked, this, [this]() { renderTile(8, 8, *f8_8); });
    connect(f9_8, &QPushButton::clicked, this, [this]() { renderTile(9, 8, *f9_8); });

    connect(f1_9, &QPushButton::clicked, this, [this]() { renderTile(1, 9, *f1_9); });
    connect(f2_9, &QPushButton::clicked, this, [this]() { renderTile(2, 9, *f2_9); });
    connect(f3_9, &QPushButton::clicked, this, [this]() { renderTile(3, 9, *f3_9); });
    connect(f4_9, &QPushButton::clicked, this, [this]() { renderTile(4, 9, *f4_9); });
    connect(f5_9, &QPushButton::clicked, this, [this]() { renderTile(5, 9, *f5_9); });
    connect(f6_9, &QPushButton::clicked, this, [this]() { renderTile(6, 9, *f6_9); });
    connect(f7_9, &QPushButton::clicked, this, [this]() { renderTile(7, 9, *f7_9); });
    connect(f8_9, &QPushButton::clicked, this, [this]() { renderTile(8, 9, *f8_9); });
    connect(f9_9, &QPushButton::clicked, this, [this]() { renderTile(9, 9, *f9_9); });

    connect(f1_10, &QPushButton::clicked, this, [this]() { renderTile(1, 10, *f1_10); });
    connect(f2_10, &QPushButton::clicked, this, [this]() { renderTile(2, 10, *f2_10); });
    connect(f3_10, &QPushButton::clicked, this, [this]() { renderTile(3, 10, *f3_10); });
    connect(f4_10, &QPushButton::clicked, this, [this]() { renderTile(4, 10, *f4_10); });
    connect(f5_10, &QPushButton::clicked, this, [this]() { renderTile(5, 10, *f5_10); });
    connect(f6_10, &QPushButton::clicked, this, [this]() { renderTile(6, 10, *f6_10); });
    connect(f7_10, &QPushButton::clicked, this, [this]() { renderTile(7, 10, *f7_10); });
    connect(f8_10, &QPushButton::clicked, this, [this]() { renderTile(8, 10, *f8_10); });
    connect(f9_10, &QPushButton::clicked, this, [this]() { renderTile(9, 10, *f9_10); });

    connect(f1_11, &QPushButton::clicked, this, [this]() { renderTile(1, 11, *f1_11); });
    connect(f2_11, &QPushButton::clicked, this, [this]() { renderTile(2, 11, *f2_11); });
    connect(f3_11, &QPushButton::clicked, this, [this]() { renderTile(3, 11, *f3_11); });
    connect(f4_11, &QPushButton::clicked, this, [this]() { renderTile(4, 11, *f4_11); });
    connect(f5_11, &QPushButton::clicked, this, [this]() { renderTile(5, 11, *f5_11); });
    connect(f6_11, &QPushButton::clicked, this, [this]() { renderTile(6, 11, *f6_11); });
    connect(f7_11, &QPushButton::clicked, this, [this]() { renderTile(7, 11, *f7_11); });
    connect(f8_11, &QPushButton::clicked, this, [this]() { renderTile(8, 11, *f8_11); });
    connect(f9_11, &QPushButton::clicked, this, [this]() { renderTile(9, 11, *f9_11); });
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
