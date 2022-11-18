// Object: UISectorEntityData
// ClassId: 3759
// RuntimeId: 63901
// TypeInfo: 0x0000000144D867A0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISectorEntityData : public Entity::EntityData {
        Int32 RenderOrder; // 0x20
        GameShared::TeamId OwnerTeam; // 0x24
        GameShared::TeamId VisibleForTeam; // 0x28
        Boolean VisibleForOneTeam; // 0x2C
        Boolean Enabled; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(UISectorEntityData) == 0x30);
}
#pragma pack(pop)