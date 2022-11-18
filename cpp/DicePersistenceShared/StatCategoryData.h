// Object: StatCategoryData
// ClassId: 5292
// RuntimeId: 52152
// TypeInfo: 0x0000000144DCA240
#include "../Entity/TreeNodeBase.h"
#include "../Global/CString.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatCategoryData : public Entity::TreeNodeBase {
        CString Code; // 0x18
        Array<DicePersistenceShared::StatCategoryData> Categories; // 0x20
        Uint32 Address; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(StatCategoryData) == 0x30);
}
#pragma pack(pop)