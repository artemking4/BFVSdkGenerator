// Object: PingMarkerSetting
// ClassId: 4423
// RuntimeId: 55083
// TypeInfo: 0x0000000144C82A40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIIconState.h"
#include "../Casablanca/PingMarkerType.h"
#include "../Casablanca/PingMarkerPlacementType.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../EffectBase/EffectBlueprint.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PingMarkerSetting : public Core::DataContainer {
        CString MarkerNameSID; // 0x18
        CString IconTextureID; // 0x20
        CString PlacementAnimTextureID; // 0x28
        CString PlacementDotTextureID; // 0x30
        CasablancaShared::UIIconState IconState; // 0x38
        CasablancaShared::UIIconState EnemyControllableIconState; // 0x3C
        Casablanca::PingMarkerType MarkerType; // 0x40
        Casablanca::PingMarkerPlacementType PlacementType; // 0x44
        Uint32 MaxCount; // 0x48
        Float32 Duration; // 0x4C
        Float32 Cooldown; // 0x50
        Float32 FadeAwayStartTime; // 0x54
        EffectBase::EffectBlueprint CreationEffect; // 0x58
        Float32 BufferDistanceBetweenPings; // 0x60
        Float32 SphereCastDistanceForLootFinding; // 0x64
        Boolean DrawPlacementAnimOnEnemyMarker; // 0x68
        Boolean DrawPlacementAnimOnWorldMarker; // 0x69
        Boolean DrawPlacementDot; // 0x6A
        Boolean UseEnemyControllableIconState; // 0x6B
        Boolean AttachOnPlacement; // 0x6C
        Boolean IgnoreInteractsOnPlacement; // 0x6D
        char pad_0x6E[0x2];
    }; // 0x70
    static_assert(sizeof(PingMarkerSetting) == 0x70);
}
#pragma pack(pop)