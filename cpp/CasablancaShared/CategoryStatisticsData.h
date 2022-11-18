// Object: CategoryStatisticsData
// ClassId: 5266
// RuntimeId: 5751
// TypeInfo: 0x0000000144D2AF20
#include "../Entity/TreeNodeBase.h"
#include "../DicePersistenceShared/StatCategoryData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CategoryStatisticsData : public Entity::TreeNodeBase {
        Array<DicePersistenceShared::StatCategoryData> CategoryRootNodes; // 0x18
    }; // 0x20
    static_assert(sizeof(CategoryStatisticsData) == 0x20);
}
#pragma pack(pop)