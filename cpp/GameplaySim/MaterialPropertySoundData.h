// Object: MaterialPropertySoundData
// ClassId: 4258
// RuntimeId: 37187
// TypeInfo: 0x0000000144E9FCC0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"
#include "../GameplaySim/MaterialSoldierSoundSettings.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialPropertySoundData : public Entity::PhysicsMaterialRelationPropertyData {
        Audio::SoundAsset ImpactSound; // 0x20
        Audio::SoundAsset ScrapeSound; // 0x28
        Float32 ScrapeLength; // 0x30
        char pad_0x34[0x4];
        GameplaySim::MaterialSoldierSoundSettings SoldierSettings; // 0x38
        Float32 Softness; // 0x40
        Float32 MaterialSoundId; // 0x44
    }; // 0x48
    static_assert(sizeof(MaterialPropertySoundData) == 0x48);
}
#pragma pack(pop)