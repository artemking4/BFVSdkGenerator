// Object: BFUITeamInfoEntityData
// ClassId: 2410
// RuntimeId: 2375
// TypeInfo: 0x0000000144D41850
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUITeamObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITeamInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUITeamObject Team; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUITeamInfoEntityData) == 0x30);
}
#pragma pack(pop)