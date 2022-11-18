// Object: SoundProviderEntityData
// ClassId: 3237
// RuntimeId: 45845
// TypeInfo: 0x0000000144DB3030
#include "../Entity/EntityData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SoundProviderEntityData : public Entity::EntityData {
        Array<Audio::SoundAsset> SoundBank; // 0x20
        Int32 Index; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SoundProviderEntityData) == 0x30);
}
#pragma pack(pop)