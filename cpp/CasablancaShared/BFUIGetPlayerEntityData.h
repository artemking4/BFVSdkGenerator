// Object: BFUIGetPlayerEntityData
// ClassId: 2234
// RuntimeId: 39674
// TypeInfo: 0x0000000144D87220
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetPlayerEntityData : public Entity::EntityData {
        Boolean UpdateAutomatically; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFUIGetPlayerEntityData) == 0x28);
}
#pragma pack(pop)