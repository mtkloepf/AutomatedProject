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
     std::cout << "Hello";
}

void UnitTest1Test::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(UnitTest1Test)

#include "tst_unittest1test.moc"
