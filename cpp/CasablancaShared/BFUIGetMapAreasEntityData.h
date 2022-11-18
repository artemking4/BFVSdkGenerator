// Object: BFUIGetMapAreasEntityData
// ClassId: 2229
// RuntimeId: 24252
// TypeInfo: 0x0000000144D5F660
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetMapAreasEntityData : public Entity::EntityData {
        Boolean UpdateAutomatically; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFUIGetMapAreasEntityData) == 0x28);
}
#pragma pack(pop)