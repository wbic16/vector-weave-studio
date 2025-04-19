#pragma once
#include <QMainWindow>
#include "./ui_vectorweavestudio.h"
#include "utils.h"

class VectorWeaveStudio : public QMainWindow, public Ui::VectorWeaveStudio
{
    Q_OBJECT

public:
    VectorWeaveStudio(QWidget *parent = nullptr);
    ~VectorWeaveStudio();

    // File
    void openFile();
    void saveFile();
    void closeFile();

    // Edit
    void cut();
    void copy();
    void paste();

    // Help
    void about();
};
