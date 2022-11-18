// Object: UIDamageTakenInfoCollection
// ClassId: 5388
// RuntimeId: 48248
// TypeInfo: 0x0000000144D434D0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDamageTakenInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDamageTakenInfoCollection : public Core::DataContainer {
        Array<CasablancaShared::UIDamageTakenInfo> DamageTaken; // 0x18
    }; // 0x20
    static_assert(sizeof(UIDamageTakenInfoCollection) == 0x20);
}
#pragma pack(pop)