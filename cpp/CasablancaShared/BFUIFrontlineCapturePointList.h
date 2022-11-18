// Object: BFUIFrontlineCapturePointList
// ClassId: 1210
// RuntimeId: 11954
// TypeInfo: 0x0000000144D2FF20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIFrontlineCapturePoint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFrontlineCapturePointList : public Core::DataContainer {
        Array<CasablancaShared::BFUIFrontlineCapturePoint> CapturePoints; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIFrontlineCapturePointList) == 0x20);
}
#pragma pack(pop)