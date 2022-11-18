// Object: BFUIElementMinimapWorldViewEntityData
// ClassId: 3659
// RuntimeId: 41764
// TypeInfo: 0x0000000144D97290
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementMinimapWorldViewEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::LinearTransform WorldTransform; // 0x130
        Core::LinearTransform AlternateWorldTransform; // 0x170
        CasablancaShared::BFUIMinimapWorldViewAsset TargetMinimapWorldViewAsset; // 0x1B0
        Float32 ViewRadius; // 0x1B8
        Float32 AdditiveBlendAdmixture; // 0x1BC
        Boolean DrawTextures; // 0x1C0
        Boolean RotateWithTransform; // 0x1C1
        Boolean UseAlternateWorldTransform; // 0x1C2
        char pad_0x1C3[0xD];
    }; // 0x1D0
    static_assert(sizeof(BFUIElementMinimapWorldViewEntityData) == 0x1D0);
}
#pragma pack(pop)