// Object: AssignPlayerToSquadEntityData
// ClassId: 2067
// RuntimeId: 2462
// TypeInfo: 0x0000000144D6C9B0
#include "../Entity/EntityData.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AssignPlayerToSquadEntityData : public Entity::EntityData {
        GameShared::SquadId Squad; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AssignPlayerToSquadEntityData) == 0x28);
}
#pragma pack(pop)