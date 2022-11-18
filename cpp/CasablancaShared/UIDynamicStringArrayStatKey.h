// Object: UIDynamicStringArrayStatKey
// ClassId: 5536
// RuntimeId: 16040
// TypeInfo: 0x0000000144D98710
#include "../CasablancaShared/UIDynamicStatKey.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicStringArrayStatKey : public CasablancaShared::UIDynamicStatKey {
        Array<CString> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(UIDynamicStringArrayStatKey) == 0x38);
}
#pragma pack(pop)