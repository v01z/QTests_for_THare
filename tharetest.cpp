#include "tharetest.h"
#include "mainwindow.h"
#include <QTest>

THareTest::THareTest() {}

void THareTest::initTestCase() { qDebug("Starting testing THare app."); }

void THareTest::testUnderlined() {
  MainWindow w;
  w.show();
  w.textEdit->setText("This is a text.");
  /*
  QTextCursor cursor = w.textEdit->textCursor();
  cursor.setPosition(0, QTextCursor::MoveAnchor);
  cursor.setPosition(7, QTextCursor::KeepAnchor);
  cursor.movePosition(QTextCursor::NextCharacter, QTextCursor::KeepAnchor);
  QVERIFY(cursor.charFormat().font().underline());
  QVERIFY(cursor.charFormat().fontUnderline());
  cursor.removeSelectedText();
  */

  w.textEdit->selectAll();
  w.onUnderlineTextFormat();

  QVERIFY(w.textEdit->textCursor().charFormat().fontUnderline());
}

void THareTest::testInternationalization() {
  MainWindow w;
  w.show();

  QVERIFY(true);
}

void THareTest::cleanupTestCase() { qDebug("Finish testing THare app."); }
