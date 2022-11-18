// Object: BFUIElementShapeEntityData
// ClassId: 3665
// RuntimeId: 45771
// TypeInfo: 0x0000000144D9CA90
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../DiceCommonsShared/DiceUIVectorShapeAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementShapeEntityData : public CasablancaShared::BFUIElementEntityData {
        DiceCommonsShared::DiceUIVectorShapeAsset ShapeDefinition; // 0x130
        Float32 RampWidth; // 0x138
        Float32 ExtraGeometry; // 0x13C
        GameShared::UIBlendMode BlendMode; // 0x140
        Int32 ZOrder; // 0x144
        Boolean KeepAspectRatio; // 0x148
        Boolean ScaleLineWidths; // 0x149
        Boolean UseColorAsOverlay; // 0x14A
        Boolean OverrideBlendMode; // 0x14B
        char pad_0x14C[0x4];
    }; // 0x150
    static_assert(sizeof(BFUIElementShapeEntityData) == 0x150);
}
#pragma pack(pop)