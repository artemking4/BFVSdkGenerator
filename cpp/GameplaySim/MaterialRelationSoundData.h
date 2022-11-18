// Object: MaterialRelationSoundData
// ClassId: 4264
// RuntimeId: 29308
// TypeInfo: 0x0000000144E9F9C0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Audio/SoundAsset.h"
#include "../Audio/AudioGraphEvent.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationSoundData : public Entity::PhysicsMaterialRelationPropertyData {
        Audio::SoundAsset ImpactSound; // 0x20
        Audio::AudioGraphEvent ImpactSoundEvent; // 0x28
        Audio::SoundAsset ScrapeSound; // 0x30
        Float32 ScrapeLength; // 0x38
        char pad_0x3C[0x4];
        Audio::AudioGraphEvent ScrapeImpactSoundEvent; // 0x40
    }; // 0x48
    static_assert(sizeof(MaterialRelationSoundData) == 0x48);
}
#pragma pack(pop)