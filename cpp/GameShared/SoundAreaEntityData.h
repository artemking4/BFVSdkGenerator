// Object: SoundAreaEntityData
// ClassId: 3227
// RuntimeId: 62207
// TypeInfo: 0x0000000144E6D850
#include "../Entity/EntityData.h"
#include "../Audio/SoundAsset.h"
#include "../GameShared/BigWorldSettingsAsset.h"
#include "../Global/Float32.h"
#include "../Audio/FadeCurveType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SoundAreaEntityData : public Entity::EntityData {
        Audio::SoundAsset Sound; // 0x20
        GameShared::BigWorldSettingsAsset BigWorld; // 0x28
        Float32 PerimeterSize; // 0x30
        Float32 RelevanceMultiplier; // 0x34
        Float32 MinRelevanceBudget; // 0x38
        Audio::FadeCurveType RelevanceFalloff; // 0x3C
        Float32 Priority; // 0x40
        Boolean EnableOnCreation; // 0x44
        Boolean UseLegacyBehavior; // 0x45
        Boolean FaceListener; // 0x46
        Boolean IgnoreVerticalPerimeter; // 0x47
    }; // 0x48
    static_assert(sizeof(SoundAreaEntityData) == 0x48);
}
#pragma pack(pop)