// Object: NetworkedObjectsAsset
// ClassId: 593
// RuntimeId: 24805
// TypeInfo: 0x0000000144ED80F0
#include "../Core/Asset.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Entity {
    class NetworkedObjectsAsset : public Core::Asset {
        Array<Core::DataContainer> Objects; // 0x20
    }; // 0x28
    static_assert(sizeof(NetworkedObjectsAsset) == 0x28);
}
#pragma pack(pop)