// Object: UIGetValueEntityData
// ClassId: 3712
// RuntimeId: 54316
// TypeInfo: 0x0000000144F68EE0
#include "../Entity/EntityData.h"
#include "../UIDataKeysShared/UISimpleDataSource.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIGetValueEntityData : public Entity::EntityData {
        UIDataKeysShared::UISimpleDataSource DataSource; // 0x20
        Boolean AssertOnWrongOutput; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(UIGetValueEntityData) == 0x38);
}
#pragma pack(pop)