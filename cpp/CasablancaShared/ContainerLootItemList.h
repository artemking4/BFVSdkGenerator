// Object: ContainerLootItemList
// ClassId: 1427
// RuntimeId: 38081
// TypeInfo: 0x0000000144D662F0
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../CasablancaShared/ContainerLootItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ContainerLootItemList : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId NameStringId; // 0x18
        Array<CasablancaShared::ContainerLootItem> Items; // 0x20
    }; // 0x28
    static_assert(sizeof(ContainerLootItemList) == 0x28);
}
#pragma pack(pop)