// Object: HorseSpringEntityData
// ClassId: 2795
// RuntimeId: 48102
// TypeInfo: 0x0000000144D2ACA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/HorseBinding.h"
#include "../CasablancaShared/RiderBinding.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class HorseSpringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 RiderOffset; // 0x30
        Core::LinearTransform PhysicsTransform; // 0x40
        CasablancaShared::HorseBinding HorseGameStateBinding; // 0x80
        CasablancaShared::RiderBinding RiderGameStateBinding; // 0xA8
        Float32 AccelerationFactor; // 0x10C
        Float32 PositionClampValue; // 0x110
        Boolean Enabled; // 0x114
        char pad_0x115[0xB];
    }; // 0x120
    static_assert(sizeof(HorseSpringEntityData) == 0x120);
}
#pragma pack(pop)