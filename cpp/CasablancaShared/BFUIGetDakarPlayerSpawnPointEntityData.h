// Object: BFUIGetDakarPlayerSpawnPointEntityData
// ClassId: 2221
// RuntimeId: 15918
// TypeInfo: 0x0000000144D66970
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetDakarPlayerSpawnPointEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        Boolean UseFastDeploy; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BFUIGetDakarPlayerSpawnPointEntityData) == 0x28);
}
#pragma pack(pop)