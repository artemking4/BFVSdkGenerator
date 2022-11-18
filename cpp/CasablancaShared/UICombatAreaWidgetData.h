// Object: UICombatAreaWidgetData
// ClassId: 3813
// RuntimeId: 33486
// TypeInfo: 0x0000000144D9BD10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../DecalBase/DecalVolumeEntityData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICombatAreaWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIElementColor LineColor; // 0x80
        Float32 LineWidth; // 0xA0
        Uint32 NumSubDivisions; // 0xA4
        Float32 StartFadeDist; // 0xA8
        Float32 EndFadeDist; // 0xAC
        Float32 MinAlpha; // 0xB0
        Float32 MaxAlpha; // 0xB4
        Float32 VolumeLineWidth; // 0xB8
        Float32 VolumeHeight; // 0xBC
        DecalBase::DecalVolumeEntityData DecalVolumeData; // 0xC0
        Boolean OnlyDrawFirstCombatAreaShape; // 0xC8
        Boolean UseDecalVolumes; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(UICombatAreaWidgetData) == 0xD0);
}
#pragma pack(pop)