// Object: BFUISelectableBoostObject
// ClassId: 4111
// RuntimeId: 64777
// TypeInfo: 0x0000000144D2F730
#include "../CasablancaShared/Identifiable.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectableBoostObject : public CasablancaShared::Identifiable {
        Int32 IdHandle; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFUISelectableBoostObject) == 0x20);
}
#pragma pack(pop)