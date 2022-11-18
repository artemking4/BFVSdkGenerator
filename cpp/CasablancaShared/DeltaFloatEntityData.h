// Object: DeltaFloatEntityData
// ClassId: 2618
// RuntimeId: 51308
// TypeInfo: 0x0000000144D4BA70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DeltaFloatEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 In; // 0x24
    }; // 0x28
    static_assert(sizeof(DeltaFloatEntityData) == 0x28);
}
#pragma pack(pop)