// Object: NetworkRegistryAsset
// ClassId: 592
// RuntimeId: 2845
// TypeInfo: 0x0000000144ED8170
#include "../Core/Asset.h"
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Entity {
    class NetworkRegistryAsset : public Core::Asset {
        Array<Core::DataContainer> Objects; // 0x20
        Uint32 Checksum; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(NetworkRegistryAsset) == 0x30);
}
#pragma pack(pop)