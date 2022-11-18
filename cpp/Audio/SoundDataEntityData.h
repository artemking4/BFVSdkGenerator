// Object: SoundDataEntityData
// ClassId: 3231
// RuntimeId: 36616
// TypeInfo: 0x0000000144E1E040
#include "../Entity/EntityData.h"
#include "../Audio/SoundDataAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundDataEntityData : public Entity::EntityData {
        Array<Audio::SoundDataAsset> DataAssets; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundDataEntityData) == 0x28);
}
#pragma pack(pop)