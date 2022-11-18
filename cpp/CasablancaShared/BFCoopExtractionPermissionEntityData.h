// Object: BFCoopExtractionPermissionEntityData
// ClassId: 2094
// RuntimeId: 28535
// TypeInfo: 0x0000000144D50F50
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCoopExtractionPermissionEntityData : public Entity::EntityData {
        Boolean SquadLeaderExtractionPermissionOnStart; // 0x20
        Boolean TransferExtractionPermissionOnDeath; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BFCoopExtractionPermissionEntityData) == 0x28);
}
#pragma pack(pop)