// Object: BFUICapturePointList
// ClassId: 1200
// RuntimeId: 53794
// TypeInfo: 0x0000000144D2F630
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUICapturePointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICapturePointList : public Core::DataContainer {
        Array<CasablancaShared::BFUICapturePointObject> CapturePoints; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUICapturePointList) == 0x20);
}
#pragma pack(pop)