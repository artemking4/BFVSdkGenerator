// Object: ConsoleCommandEntityData
// ClassId: 2545
// RuntimeId: 44106
// TypeInfo: 0x0000000144E8FF60
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class ConsoleCommandEntityData : public Entity::EntityData {
        Array<CString> Commands; // 0x20
        CString DynamicCommand; // 0x28
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ConsoleCommandEntityData) == 0x38);
}
#pragma pack(pop)