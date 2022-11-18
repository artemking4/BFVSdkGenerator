// Object: PingSiteList
// ClassId: 4425
// RuntimeId: 62553
// TypeInfo: 0x0000000144D64770
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PingSite.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PingSiteList : public Core::DataContainer {
        Array<CasablancaShared::PingSite> Pingsites; // 0x18
    }; // 0x20
    static_assert(sizeof(PingSiteList) == 0x20);
}
#pragma pack(pop)