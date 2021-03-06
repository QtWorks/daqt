#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QModelIndex>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget* parent = 0);

	~MainWindow();

private:
	Ui::MainWindow* ui;

public slots:
	void showDialog(int dialog);
	void openConnection(QModelIndex index);
	void closeTab(int tab);
	void loadConnections(int);
	void tableContext(QPoint point);
	void closeCurrentTab();
};

#endif // MAINWINDOW_HPP
