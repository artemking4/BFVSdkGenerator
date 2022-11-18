// Object: IntToEnumEntityData
// ClassId: 2704
// RuntimeId: 17536
// TypeInfo: 0x0000000144ED6620
#include "../Entity/ExplicitEnumTypeLogicEntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class IntToEnumEntityData : public Entity::ExplicitEnumTypeLogicEntityData {
        Int32 In; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(IntToEnumEntityData) == 0x30);
}
#pragma pack(pop)