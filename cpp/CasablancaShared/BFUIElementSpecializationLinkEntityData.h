// Object: BFUIElementSpecializationLinkEntityData
// ClassId: 3668
// RuntimeId: 32923
// TypeInfo: 0x0000000144D4BE70
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/SpecializationTreeAssetInfo.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementSpecializationLinkEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 DefaultColor; // 0x130
        Core::Vec3 EquippedColor; // 0x140
        Core::Vec3 DisabledColor; // 0x150
        Core::Vec3 LockedColor; // 0x160
        CasablancaShared::SpecializationTreeAssetInfo AssetInfo; // 0x170
        Float32 DistanceFromAnchor; // 0x178
        Int32 SubdivisionSteps; // 0x17C
        Float32 LineWidth; // 0x180
        Float32 AntialiasWidth; // 0x184
        Float32 DefaultAlpha; // 0x188
        Float32 EquippedAlpha; // 0x18C
        Float32 DisabledAlpha; // 0x190
        Float32 LockedAlpha; // 0x194
        char pad_0x198[0x8];
    }; // 0x1A0
    static_assert(sizeof(BFUIElementSpecializationLinkEntityData) == 0x1A0);
}
#pragma pack(pop)