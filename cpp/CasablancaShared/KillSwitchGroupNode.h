// Object: KillSwitchGroupNode
// ClassId: 5287
// RuntimeId: 21119
// TypeInfo: 0x0000000144D4A270
#include "../Entity/TreeNodeBase.h"
#include "../Global/CString.h"
#include "../CasablancaShared/KillSwitchNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KillSwitchGroupNode : public Entity::TreeNodeBase {
        CString GroupName; // 0x18
        Array<CasablancaShared::KillSwitchNode> KillSwitches; // 0x20
    }; // 0x28
    static_assert(sizeof(KillSwitchGroupNode) == 0x28);
}
#pragma pack(pop)