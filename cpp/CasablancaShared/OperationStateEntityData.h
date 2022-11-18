// Object: OperationStateEntityData
// ClassId: 2921
// RuntimeId: 33628
// TypeInfo: 0x0000000144D14300
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OperationStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(OperationStateEntityData) == 0x28);
}
#pragma pack(pop)