// Object: UIOnlineStatKey
// ClassId: 5537
// RuntimeId: 30922
// TypeInfo: 0x0000000144D98490
#include "../CasablancaShared/UIStatKey.h"
#include "../CasablancaShared/UIOnlineStatVisualType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOnlineStatKey : public CasablancaShared::UIStatKey {
        CasablancaShared::UIOnlineStatVisualType VisualType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIOnlineStatKey) == 0x38);
}
#pragma pack(pop)