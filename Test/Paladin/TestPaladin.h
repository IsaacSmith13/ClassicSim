#ifndef TESTPALADIN_H
#define TESTPALADIN_H

#include "TestObject.h"
#include "TestUtils.h"

class EquipmentDb;

class TestPaladin : public TestObject {
public:
    TestPaladin(EquipmentDb* equipment_db);

    void test_all() override;

private:
    void test_values_after_initialization() override;
};

#endif // TESTPALADIN_H
