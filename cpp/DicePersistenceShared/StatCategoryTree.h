// Object: StatCategoryTree
// ClassId: 839
// RuntimeId: 29199
// TypeInfo: 0x0000000144DCA1C0
#include "../Entity/TreeBase.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatCategoryTree : public Entity::TreeBase {
        Array<DicePersistenceShared::StatCategoryData> Categories; // 0x20
        Uint8 Hash; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(StatCategoryTree) == 0x30);
}
#pragma pack(pop)