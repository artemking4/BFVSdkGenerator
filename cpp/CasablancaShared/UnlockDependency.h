// Object: UnlockDependency
// ClassId: 5551
// RuntimeId: 5843
// TypeInfo: 0x0000000144D2B120
#include "../Core/DataContainer.h"
#include "../CasablancaShared/WeaponCategorySetting.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UnlockDependency : public Core::DataContainer {
        Array<CasablancaShared::WeaponCategorySetting> DependsOnAnyOfThese; // 0x18
        Guid WeaponUnlockGuids; // 0x20
    }; // 0x30
    static_assert(sizeof(UnlockDependency) == 0x30);
}
#pragma pack(pop)