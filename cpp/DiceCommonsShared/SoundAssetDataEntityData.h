// Object: SoundAssetDataEntityData
// ClassId: 3228
// RuntimeId: 46121
// TypeInfo: 0x0000000144DB30B0
#include "../Entity/EntityData.h"
#include "../Audio/SoundAsset.h"
#include "../Audio/SoundDataAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SoundAssetDataEntityData : public Entity::EntityData {
        Array<Audio::SoundAsset> SoundAssets; // 0x20
        Array<Audio::SoundDataAsset> DataAssets; // 0x28
    }; // 0x30
    static_assert(sizeof(SoundAssetDataEntityData) == 0x30);
}
#pragma pack(pop)