// Object: GameDataContainerAsset
// ClassId: 512
// RuntimeId: 13957
// TypeInfo: 0x0000000144ED7170
#include "../Core/Asset.h"
#include "../Core/GameDataContainer.h"

#pragma pack(push, 8)
namespace Entity {
    class GameDataContainerAsset : public Core::Asset {
        Core::GameDataContainer Data; // 0x20
    }; // 0x28
    static_assert(sizeof(GameDataContainerAsset) == 0x28);
}
#pragma pack(pop)