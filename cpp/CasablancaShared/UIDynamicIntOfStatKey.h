// Object: UIDynamicIntOfStatKey
// ClassId: 5533
// RuntimeId: 57977
// TypeInfo: 0x0000000144D98790
#include "../CasablancaShared/UIDynamicStatKey.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicIntOfStatKey : public CasablancaShared::UIDynamicStatKey {
        Int32 Value; // 0x30
        Int32 Of; // 0x34
    }; // 0x38
    static_assert(sizeof(UIDynamicIntOfStatKey) == 0x38);
}
#pragma pack(pop)