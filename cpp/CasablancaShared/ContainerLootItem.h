// Object: ContainerLootItem
// ClassId: 1426
// RuntimeId: 15107
// TypeInfo: 0x0000000144D66370
#include "../Core/DataContainer.h"
#include "../CasablancaShared/DakarUILootItem.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ContainerLootItem : public Core::DataContainer {
        CasablancaShared::DakarUILootItem LootItem; // 0x18
        Boolean IsAvailable; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(ContainerLootItem) == 0x28);
}
#pragma pack(pop)