// Object: BFUICharacterObject
// ClassId: 4108
// RuntimeId: 8588
// TypeInfo: 0x0000000144D84820
#include "../CasablancaShared/Identifiable.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICharacterObject : public CasablancaShared::Identifiable {
        CasablancaShared::BFUIAppearanceInstanceObject Head; // 0x18
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUICharacterObject) == 0x28);
}
#pragma pack(pop)