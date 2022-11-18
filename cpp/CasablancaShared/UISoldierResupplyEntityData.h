// Object: UISoldierResupplyEntityData
// ClassId: 3476
// RuntimeId: 31889
// TypeInfo: 0x0000000144D5D6E0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UISoldierResupplyEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform IconTransform; // 0x60
        Core::Realm Realm; // 0xA0
        Boolean Enabled; // 0xA4
        Boolean IsAmmo; // 0xA5
        Boolean IsHealth; // 0xA6
        char pad_0xA7[0x9];
    }; // 0xB0
    static_assert(sizeof(UISoldierResupplyEntityData) == 0xB0);
}
#pragma pack(pop)