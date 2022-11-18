// Object: BFSaveDataBaseEntityData
// ClassId: 2119
// RuntimeId: 50818
// TypeInfo: 0x0000000144D313A0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class BFSaveDataBaseEntityData : public Entity::EntityData {
        CString UniqueDataId; // 0x20
    }; // 0x28
    static_assert(sizeof(BFSaveDataBaseEntityData) == 0x28);
}