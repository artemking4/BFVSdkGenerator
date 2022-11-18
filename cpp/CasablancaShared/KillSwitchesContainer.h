// Object: KillSwitchesContainer
// ClassId: 833
// RuntimeId: 36872
// TypeInfo: 0x0000000144D4A2F0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/KillSwitchGroupNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KillSwitchesContainer : public Entity::TreeBase {
        Array<CasablancaShared::KillSwitchGroupNode> KillSwitchGroups; // 0x20
    }; // 0x28
    static_assert(sizeof(KillSwitchesContainer) == 0x28);
}
#pragma pack(pop)