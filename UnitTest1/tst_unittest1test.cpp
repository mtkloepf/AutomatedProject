#include <QString>
#include <QtTest>
#include <iostream>

class UnitTest1Test : public QObject
{
    Q_OBJECT

public:
    UnitTest1Test();

private Q_SLOTS:
    void testCase1();
};

UnitTest1Test::UnitTest1Test()
{
}

void UnitTest1Test::testCase1()
{
    QCOMPARE(0, 1);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(UnitTest1Test)

#include "tst_unittest1test.moc"
