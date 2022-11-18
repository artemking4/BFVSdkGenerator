// Object: BFUIGetTeamEntityData
// ClassId: 2256
// RuntimeId: 52367
// TypeInfo: 0x0000000144D418D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetTeamEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Boolean UpdateAutomatically; // 0x24
        Boolean OutputLocalTeam; // 0x25
        Boolean OutputCustomizationTeam; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(BFUIGetTeamEntityData) == 0x28);
}
#pragma pack(pop)