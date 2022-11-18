// Object: SectorEntityData
// ClassId: 3148
// RuntimeId: 54836
// TypeInfo: 0x0000000144D5C360
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SectorEntityData : public Entity::EntityData {
        GameShared::TeamId InitialOwnerTeam; // 0x20
        GameShared::TeamId OwnerTeam; // 0x24
        GameShared::TeamId ForcedTeam; // 0x28
        Boolean OverrideTeam; // 0x2C
        Boolean UseForcedTeam; // 0x2D
        Boolean UseManualMode; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(SectorEntityData) == 0x30);
}
#pragma pack(pop)