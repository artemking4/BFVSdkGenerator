// Object: AutoTeamEntityData
// ClassId: 2087
// RuntimeId: 18
// TypeInfo: 0x0000000144D5C560
#include "../Entity/EntityData.h"
#include "../CasablancaShared/TeamAssignMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AutoTeamEntityData : public Entity::EntityData {
        CasablancaShared::TeamAssignMode TeamAssignMode; // 0x20
        Uint32 PlayerCountNeededToAutoBalance; // 0x24
        Uint32 TeamDifferenceToAutoBalance; // 0x28
        Boolean EnableSquads; // 0x2C
        Boolean RotateTeamOnNewRound; // 0x2D
        Boolean AutoBalance; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(AutoTeamEntityData) == 0x30);
}
#pragma pack(pop)