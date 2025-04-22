#pragma once
#include <QMainWindow>
#include "./ui_vectorweavestudio.h"
#include <set>

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

    // Tiles
    void renderTile(int x, int y, QPushButton &tile);

private:
    std::set<QPushButton*> m_tiles;
};
