// Object: LocalizedStringCoalesceEntityData
// ClassId: 2842
// RuntimeId: 57405
// TypeInfo: 0x0000000144DBBD00
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class LocalizedStringCoalesceEntityData : public Entity::EntityData {
        Int32 InputCount; // 0x20
        Boolean TreadEmptyStringAsNull; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(LocalizedStringCoalesceEntityData) == 0x28);
}
#pragma pack(pop)