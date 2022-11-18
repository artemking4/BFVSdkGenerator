// Object: ManualDataAsset
// ClassId: 553
// RuntimeId: 27946
// TypeInfo: 0x0000000144D29AA0
#include "../Core/Asset.h"
#include "../CasablancaShared/ManualDataEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ManualDataAsset : public Core::Asset {
        Array<CasablancaShared::ManualDataEntry> Entries; // 0x20
    }; // 0x28
    static_assert(sizeof(ManualDataAsset) == 0x28);
}
#pragma pack(pop)