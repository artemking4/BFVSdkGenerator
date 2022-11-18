// Object: DiceSoundAreaEntityData
// ClassId: 2624
// RuntimeId: 32940
// TypeInfo: 0x0000000144DB3330
#include "../Entity/EntityData.h"
#include "../Audio/SoundAsset.h"
#include "../GameShared/BigWorldSettingsAsset.h"
#include "../Global/Float32.h"
#include "../Audio/FadeCurveType.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../DiceCommonsShared/ExtraSound.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceSoundAreaEntityData : public Entity::EntityData {
        Audio::SoundAsset Sound; // 0x20
        GameShared::BigWorldSettingsAsset BigWorld; // 0x28
        Float32 PerimeterSize; // 0x30
        Float32 RelevanceMultiplier; // 0x34
        Float32 MinRelevanceBudget; // 0x38
        Audio::FadeCurveType RelevanceFalloff; // 0x3C
        Float32 Priority; // 0x40
        Int32 AreaType; // 0x44
        Array<DiceCommonsShared::ExtraSound> ExtraSounds; // 0x48
        Float32 MaxInteriorProximity; // 0x50
        char pad_0x54[0x4];
        Array<Int32> ExtraSoundsPortsHashedNames; // 0x58
        Boolean EnableOnCreation; // 0x60
        Boolean FaceListener; // 0x61
        Boolean IgnoreVerticalPerimeter; // 0x62
        Boolean UseClosestPointXYZ; // 0x63
        Boolean UpdateTransformWhenInsideArea; // 0x64
        Boolean IsWeatherSystemMixing; // 0x65
        Boolean IsInterior; // 0x66
        char pad_0x67[0x1];
    }; // 0x68
    static_assert(sizeof(DiceSoundAreaEntityData) == 0x68);
}
#pragma pack(pop)