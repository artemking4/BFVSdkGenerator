// Object: DiceSoundSpatialEntityData
// ClassId: 3358
// RuntimeId: 49544
// TypeInfo: 0x0000000144DB3230
#include "../Entity/SpatialEntityData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class DiceSoundSpatialEntityData : public Entity::SpatialEntityData {
        Audio::SoundAsset Sound; // 0x60
        Float32 Amplitude; // 0x68
        Boolean PlayOnCreation; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(DiceSoundSpatialEntityData) == 0x70);
}
#pragma pack(pop)