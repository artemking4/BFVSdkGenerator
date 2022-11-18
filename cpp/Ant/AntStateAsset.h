// Object: AntStateAsset
// ClassId: 149
// RuntimeId: 63862
// TypeInfo: 0x0000000144DFB7E0
#include "../Core/Asset.h"
#include "../Global/Guid.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Ant {
    class AntStateAsset : public Core::Asset {
        Guid StreamingGuid; // 0x20
        Int32 ChunkSize; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(AntStateAsset) == 0x38);
}
#pragma pack(pop)