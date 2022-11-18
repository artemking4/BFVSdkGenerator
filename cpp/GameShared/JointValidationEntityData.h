// Object: JointValidationEntityData
// ClassId: 2818
// RuntimeId: 28413
// TypeInfo: 0x0000000144E8F0E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class JointValidationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString JointName; // 0x28
        Float32 Joint_X; // 0x30
        Float32 Joint_Y; // 0x34
        Float32 Joint_Z; // 0x38
        Float32 Tolerance; // 0x3C
        Float32 Tick; // 0x40
        Boolean DisableValidation; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(JointValidationEntityData) == 0x48);
}
#pragma pack(pop)