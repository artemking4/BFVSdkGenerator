// Object: BFUIOnlineStat
// ClassId: 1258
// RuntimeId: 48915
// TypeInfo: 0x0000000144D81F20
#include "../CasablancaShared/BFUIStat.h"
#include "../CasablancaShared/UIOnlineStatVisualType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOnlineStat : public CasablancaShared::BFUIStat {
        CasablancaShared::UIOnlineStatVisualType VisualType; // 0x30
        Int32 Value; // 0x34
    }; // 0x38
    static_assert(sizeof(BFUIOnlineStat) == 0x38);
}
#pragma pack(pop)