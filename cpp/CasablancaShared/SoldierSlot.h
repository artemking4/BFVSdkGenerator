// Object: SoldierSlot
// ClassId: 4644
// RuntimeId: 32200
// TypeInfo: 0x0000000144D5C760
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SoldierClassAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierSlot : public Core::DataContainer {
        CasablancaShared::SoldierClassAsset Soldier; // 0x18
        Int32 Name; // 0x20
        Int32 Index; // 0x24
    }; // 0x28
    static_assert(sizeof(SoldierSlot) == 0x28);
}
#pragma pack(pop)