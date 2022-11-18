// Object: SquadReinforcementReservedEntityData
// ClassId: 3509
// RuntimeId: 54592
// TypeInfo: 0x0000000144D34CB0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementReservedEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        Array<Int32> ReservedCountHashes; // 0x28
    }; // 0x30
    static_assert(sizeof(SquadReinforcementReservedEntityData) == 0x30);
}
#pragma pack(pop)