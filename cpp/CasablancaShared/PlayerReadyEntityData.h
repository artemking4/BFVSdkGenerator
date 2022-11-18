// Object: PlayerReadyEntityData
// ClassId: 3031
// RuntimeId: 6551
// TypeInfo: 0x0000000144D4B470
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerReadyEntityData : public Entity::EntityData {
        Int32 NeededCount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerReadyEntityData) == 0x28);
}
#pragma pack(pop)