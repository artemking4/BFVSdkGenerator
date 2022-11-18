// Object: SpartaDataAsset
// ClassId: 757
// RuntimeId: 6026
// TypeInfo: 0x0000000144F50EC0
#include "../Core/Asset.h"
#include "../Global/Guid.h"
#include "../SpartaShared/OffsetInfo.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaDataAsset : public Core::Asset {
        Guid ChunkGuid; // 0x20
        Array<SpartaShared::OffsetInfo> Offsets; // 0x30
        Uint32 ChunkSize; // 0x38
        char pad_0x3C[0x4];
        CString LocalPath; // 0x40
    }; // 0x48
    static_assert(sizeof(SpartaDataAsset) == 0x48);
}
#pragma pack(pop)