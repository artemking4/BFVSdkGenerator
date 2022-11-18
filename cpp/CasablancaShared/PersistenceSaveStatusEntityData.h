// Object: PersistenceSaveStatusEntityData
// ClassId: 2940
// RuntimeId: 62515
// TypeInfo: 0x0000000144D14000
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceSaveStatusEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(PersistenceSaveStatusEntityData) == 0x28);
}
#pragma pack(pop)