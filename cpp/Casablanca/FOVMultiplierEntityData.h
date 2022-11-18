// Object: FOVMultiplierEntityData
// ClassId: 2732
// RuntimeId: 55845
// TypeInfo: 0x0000000144C1D180
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FOVMultiplierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 FOVMultiplier; // 0x24
    }; // 0x28
    static_assert(sizeof(FOVMultiplierEntityData) == 0x28);
}
#pragma pack(pop)