// Object: SoldierDraggingEntityData
// ClassId: 3219
// RuntimeId: 46744
// TypeInfo: 0x0000000144C33370
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SoldierDraggingEntityData : public Entity::EntityData {
        Float32 MaxDistance; // 0x20
        Float32 MaxVerticalDistance; // 0x24
    }; // 0x28
    static_assert(sizeof(SoldierDraggingEntityData) == 0x28);
}
#pragma pack(pop)