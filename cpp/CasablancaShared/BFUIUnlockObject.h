// Object: BFUIUnlockObject
// ClassId: 4120
// RuntimeId: 605
// TypeInfo: 0x0000000144D86F20
#include "../CasablancaShared/Identifiable.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIUnlockObject : public CasablancaShared::Identifiable {
        Int32 Dummy; // 0x18
        char pad_0x1C[0xC];
    }; // 0x28
    static_assert(sizeof(BFUIUnlockObject) == 0x28);
}
#pragma pack(pop)