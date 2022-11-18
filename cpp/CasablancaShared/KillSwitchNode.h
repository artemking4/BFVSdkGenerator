// Object: KillSwitchNode
// ClassId: 5288
// RuntimeId: 44548
// TypeInfo: 0x0000000144D4A1F0
#include "../Entity/TreeNodeBase.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KillSwitchNode : public Entity::TreeNodeBase {
        CString KillSwitchName; // 0x18
        CString ParentName; // 0x20
        Boolean KillSwitchEnabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(KillSwitchNode) == 0x30);
}
#pragma pack(pop)