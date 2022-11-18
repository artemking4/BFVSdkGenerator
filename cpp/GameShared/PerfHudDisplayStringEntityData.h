// Object: PerfHudDisplayStringEntityData
// ClassId: 2938
// RuntimeId: 996
// TypeInfo: 0x0000000144E8FA60
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class PerfHudDisplayStringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString StringValue0; // 0x28
        CString StringValue1; // 0x30
        CString StringValue2; // 0x38
        CString StringValue3; // 0x40
        CString StringValue4; // 0x48
        CString StringValue5; // 0x50
        CString StringValue6; // 0x58
        CString StringValue7; // 0x60
    }; // 0x68
    static_assert(sizeof(PerfHudDisplayStringEntityData) == 0x68);
}
#pragma pack(pop)