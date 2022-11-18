// Object: BFUICheckedUnlockData
// ClassId: 1202
// RuntimeId: 58851
// TypeInfo: 0x0000000144D4C7F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIUnlockObject.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICheckedUnlockData : public Core::DataContainer {
        CasablancaShared::BFUIUnlockObject Unlock; // 0x18
        Int32 UnlockIdentifier; // 0x20
        Boolean IsEquipped; // 0x24
        Boolean IsEquippable; // 0x25
        Boolean IsNewUnlock; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(BFUICheckedUnlockData) == 0x28);
}
#pragma pack(pop)