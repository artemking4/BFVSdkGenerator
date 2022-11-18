// Object: FootprintNodeBase
// ClassId: 5267
// RuntimeId: 16799
// TypeInfo: 0x0000000144D0A2B0
#include "../Entity/TreeNodeBase.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

namespace CasablancaShared {
    class FootprintNodeBase : public Entity::TreeNodeBase {
        CString DebugName; // 0x18
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(FootprintNodeBase) == 0x28);
}