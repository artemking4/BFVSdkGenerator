// Object: RunningAverageEntityData
// ClassId: 3137
// RuntimeId: 31292
// TypeInfo: 0x0000000144EE40D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class RunningAverageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 NumberOfValues; // 0x24
        Float32 In; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RunningAverageEntityData) == 0x30);
}
#pragma pack(pop)