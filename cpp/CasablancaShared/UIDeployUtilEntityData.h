// Object: UIDeployUtilEntityData
// ClassId: 3630
// RuntimeId: 11417
// TypeInfo: 0x0000000144D207F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDeployUtilEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIDeployUtilEntityData) == 0x28);
}
#pragma pack(pop)