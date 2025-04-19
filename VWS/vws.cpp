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
void VectorWeaveStudio::about()
{
    QMessageBox::information(this, QSL("Vector Weave Studio"),
        QSL("Vector Weave Studio helps you organize your digital assets visually, without resorting to the tyranny of naming things or using a file system. Consider Supporting development by donating!\n\nVersion: 0.0.1\n(c) 2025 Phext, Inc."));
}
