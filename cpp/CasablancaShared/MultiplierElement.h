// Object: MultiplierElement
// ClassId: 4326
// RuntimeId: 62477
// TypeInfo: 0x0000000144D13980
#include "../Core/DataContainer.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MultiplierElement : public Core::DataContainer {
        DicePersistenceShared::StatCategoryData Outcome; // 0x18
        Float32 Multiplier; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MultiplierElement) == 0x28);
}
#pragma pack(pop)