// Object: UISetValueData
// ClassId: 3762
// RuntimeId: 45606
// TypeInfo: 0x0000000144F68F60
#include "../Entity/EntityData.h"
#include "../UIDataKeysShared/UISimpleDataSource.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UISetValueData : public Entity::EntityData {
        UIDataKeysShared::UISimpleDataSource DataSource; // 0x20
        Int32 IntValue; // 0x30
        Float32 FloatValue; // 0x34
        CString StringValue; // 0x38
        Boolean BoolValue; // 0x40
        Boolean AllLocalPlayers; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(UISetValueData) == 0x48);
}
#pragma pack(pop)