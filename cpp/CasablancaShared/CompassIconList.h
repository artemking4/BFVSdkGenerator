// Object: CompassIconList
// ClassId: 1420
// RuntimeId: 56480
// TypeInfo: 0x0000000144D2FAA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/CompassIconInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CompassIconList : public Core::DataContainer {
        Array<CasablancaShared::CompassIconInfo> Icons; // 0x18
    }; // 0x20
    static_assert(sizeof(CompassIconList) == 0x20);
}
#pragma pack(pop)