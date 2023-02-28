#include "tharetest.h"
#include "mainwindow.h"
#include <QTest>

THareTest::THareTest() {}

void THareTest::initTestCase() {
  qDebug("Начинаю юнит-тестировние приложения THare.");
}

// Тест функции, придающей выделенному фрагменту
// текста подчёркнутый вид
void THareTest::testUnderlined() {

  // Предусловие:
  // Текстовый редактор содержит некторый текст
  MainWindow w;
  w.show();
  w.textEdit->setText("This is a text.");

  // Тестовые шаги:
  // 1. Выделение текста
  w.textEdit->selectAll();
  // 2. Выполнение метода onUnderLIneTextFormat()
  w.onUnderlineTextFormat();

  // Ожидаемый результат:
  // Выделенный фрагмет текст имеет подчёркнутый вид
  QVERIFY(w.textEdit->textCursor().charFormat().fontUnderline());

  // Постусловие:
  // В выводе теста ожидается 'PASS'
}

// Тест функции локализации приложения
void THareTest::testLocalization() {

  // Предусловие:
  // Язык интерфейса текстового редактора может
  // быть либо русским, либо английским
  MainWindow w;
  w.show();

  // Тестовые шаги:
  // 1. Сохранение текущего языка во временной переменной
  QString langAtStart = w.translator->language(); // ru_RU or en_US
  // 2. Выполнение метода retranslateGUI()
  w.retranslateGUI();

  // Ожидаемый результат:
  // Язык интерфейса должен измениться
  QVERIFY(langAtStart != w.translator->language());

  // Постусловие:
  // В выводе теста ожидается 'PASS'
}

// Тест функции, выравнивающей текст по правому краю
void THareTest::testAlignTextRight() {
  // Предусловие:
  // Текстовый редактор содержит некоторый текст
  MainWindow w;
  w.show();
  w.textEdit->setText("This is a text.");

  // Тестовые шаги:
  // 1. Выделение текста
  w.textEdit->selectAll();
  // 2. Выполнение метода onAlignTextRight()
  w.onAlignTextRight();

  // Ожидаемый результат:
  // Текст выровнен по правому краю
  QVERIFY(w.textEdit->textCursor().blockFormat().alignment() == Qt::AlignRight);

  // Постусловие:
  // В выводе теста ожидается 'PASS'
}

void THareTest::cleanupTestCase() { qDebug("Тестировние закончено."); }
