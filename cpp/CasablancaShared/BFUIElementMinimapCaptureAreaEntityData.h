// Object: BFUIElementMinimapCaptureAreaEntityData
// ClassId: 3654
// RuntimeId: 27398
// TypeInfo: 0x0000000144D97090
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementMinimapCaptureAreaEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0x130
        GameShared::UIBlendMode BlendMode; // 0x138
        Float32 AntiAliasingWidth; // 0x13C
        Float32 BevelWorldWidth; // 0x140
        Boolean OverrideBlendMode; // 0x144
        Boolean UseCapturePointEntityTransform; // 0x145
        char pad_0x146[0xA];
    }; // 0x150
    static_assert(sizeof(BFUIElementMinimapCaptureAreaEntityData) == 0x150);
}
#pragma pack(pop)