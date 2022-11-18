// Object: WSNodeBase
// ClassId: 5341
// RuntimeId: 26809
// TypeInfo: 0x0000000144CFAFD0
#include "../Entity/TreeNodeBase.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class WSNodeBase : public Entity::TreeNodeBase {
        CString DebugName; // 0x18
        Boolean dummy; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WSNodeBase) == 0x28);
}