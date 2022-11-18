// Object: NewWaveAssetObserverEntityData
// ClassId: 2902
// RuntimeId: 34608
// TypeInfo: 0x0000000144E1E6C0
#include "../Entity/EntityData.h"
#include "../Audio/NewWaveAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class NewWaveAssetObserverEntityData : public Entity::EntityData {
        Audio::NewWaveAsset NewWaveAsset; // 0x20
    }; // 0x28
    static_assert(sizeof(NewWaveAssetObserverEntityData) == 0x28);
}
#pragma pack(pop)