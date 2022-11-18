// Object: CasablancaSpartaPurchasedItem
// ClassId: 1293
// RuntimeId: 28203
// TypeInfo: 0x0000000144C74AB0
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaPurchasedItem : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        Guid ItemId; // 0x28
    }; // 0x38
    static_assert(sizeof(CasablancaSpartaPurchasedItem) == 0x38);
}
#pragma pack(pop)