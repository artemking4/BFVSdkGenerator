// Object: BFUIElementMinimapCombatAreaEntityData
// ClassId: 3655
// RuntimeId: 51940
// TypeInfo: 0x0000000144D97110
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementMinimapCombatAreaEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 PrimaryColor; // 0x130
        Core::Vec3 SecondaryColor; // 0x140
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0x150
        GameShared::UIBlendMode BlendMode; // 0x158
        Float32 PrimaryAlpha; // 0x15C
        Float32 SecondaryAlpha; // 0x160
        Float32 AntiAliasingWidth; // 0x164
        Float32 PatternWorldWidth; // 0x168
        Boolean OverrideBlendMode; // 0x16C
        char pad_0x16D[0x3];
    }; // 0x170
    static_assert(sizeof(BFUIElementMinimapCombatAreaEntityData) == 0x170);
}
#pragma pack(pop)