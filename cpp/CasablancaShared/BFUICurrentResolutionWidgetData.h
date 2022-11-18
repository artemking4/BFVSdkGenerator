// Object: BFUICurrentResolutionWidgetData
// ClassId: 3793
// RuntimeId: 30348
// TypeInfo: 0x0000000144D9A910
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/BFUICurrentResolutionAspectRatio.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUICurrentResolutionWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Array<CasablancaShared::BFUICurrentResolutionAspectRatio> AspectRatios; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BFUICurrentResolutionWidgetData) == 0x90);
}
#pragma pack(pop)