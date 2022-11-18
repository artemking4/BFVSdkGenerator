// Object: BFUIFilterEntityBaseData
// ClassId: 2194
// RuntimeId: 8809
// TypeInfo: 0x0000000144D81A20
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFUIFilterEntityBaseData : public Entity::EntityData {
        Boolean FilterByIncludeList; // 0x20
        Boolean FilterByExcludeList; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BFUIFilterEntityBaseData) == 0x28);
}