// Object: MultiplierSet
// ClassId: 4327
// RuntimeId: 2190
// TypeInfo: 0x0000000144D13900
#include "../Core/DataContainer.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../CasablancaShared/MultiplierElement.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MultiplierSet : public Core::DataContainer {
        DicePersistenceShared::StatCategoryData GameMode; // 0x18
        Array<CasablancaShared::MultiplierElement> Multipliers; // 0x20
    }; // 0x28
    static_assert(sizeof(MultiplierSet) == 0x28);
}
#pragma pack(pop)