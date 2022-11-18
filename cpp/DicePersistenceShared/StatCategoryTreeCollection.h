// Object: StatCategoryTreeCollection
// ClassId: 760
// RuntimeId: 19822
// TypeInfo: 0x0000000144DCA140
#include "../Core/Asset.h"
#include "../DicePersistenceShared/StatCategoryTree.h"
#include "../DicePersistenceShared/StatCategoryData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatCategoryTreeCollection : public Core::Asset {
        Array<DicePersistenceShared::StatCategoryTree> CategoryTrees; // 0x20
        Array<DicePersistenceShared::StatCategoryData> Categories; // 0x28
    }; // 0x30
    static_assert(sizeof(StatCategoryTreeCollection) == 0x30);
}
#pragma pack(pop)