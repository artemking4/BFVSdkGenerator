// Object: RimeListItemInterfaceData
// ClassId: 3122
// RuntimeId: 53435
// TypeInfo: 0x0000000144F2A320
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace RimeElementsShared {
    class RimeListItemInterfaceData : public Entity::EntityData {
        Int32 DataTypeHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(RimeListItemInterfaceData) == 0x28);
}
#pragma pack(pop)