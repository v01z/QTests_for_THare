#include "mainwindow.h"

#include "qtestcase.h"
#include "tharetest.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  MainWindow w;

  // w.show();

  QTest::qExec(new THareTest(), argc, argv);

  return 0;
  // return a.exec();
}
