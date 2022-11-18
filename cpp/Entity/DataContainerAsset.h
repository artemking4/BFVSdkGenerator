// Object: DataContainerAsset
// ClassId: 280
// RuntimeId: 55242
// TypeInfo: 0x0000000144ED71F0
#include "../Core/Asset.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Entity {
    class DataContainerAsset : public Core::Asset {
        Core::DataContainer Data; // 0x20
    }; // 0x28
    static_assert(sizeof(DataContainerAsset) == 0x28);
}
#pragma pack(pop)