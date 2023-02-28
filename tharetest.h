#ifndef THARETEST_H
#define THARETEST_H

#include <QObject>

class THareTest : public QObject {
  Q_OBJECT
private slots:
  void initTestCase();

  void testUnderlined();
  void testInternationalization();

  void cleanupTestCase();

public:
  THareTest();
};

#endif // THARETEST_H
