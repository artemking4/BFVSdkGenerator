// Object: BFUIPurchaseResponseItem
// ClassId: 1238
// RuntimeId: 3341
// TypeInfo: 0x0000000144D85DA0
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPurchaseResponseItem : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        Guid ItemId; // 0x28
    }; // 0x38
    static_assert(sizeof(BFUIPurchaseResponseItem) == 0x38);
}
#pragma pack(pop)