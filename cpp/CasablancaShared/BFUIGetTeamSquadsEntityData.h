// Object: BFUIGetTeamSquadsEntityData
// ClassId: 2258
// RuntimeId: 41648
// TypeInfo: 0x0000000144D42050
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUITeamObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetTeamSquadsEntityData : public Entity::EntityData {
        CasablancaShared::BFUITeamObject Team; // 0x20
        Boolean UpdateAutomatically; // 0x28
        Boolean OutputForLocalTeam; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIGetTeamSquadsEntityData) == 0x30);
}
#pragma pack(pop)