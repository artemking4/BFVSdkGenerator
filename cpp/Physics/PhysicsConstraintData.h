// Object: PhysicsConstraintData
// ClassId: 2985
// RuntimeId: 56180
// TypeInfo: 0x0000000144F0F000
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Realm.h"
#include "../Global/Uint8.h"
#include "../Physics/PhysicsConstraintInitialStanceData.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsConstraintData : public Entity::EntityData {
        Float32 BreakThreshold; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        Core::Realm Realm; // 0x70
        char pad_0x74[0x4];
        Physics::PhysicsConstraintInitialStanceData InitialStanceData; // 0x78
        Boolean IsBreakable; // 0x80
        Boolean OnlyBreakOnServer; // 0x81
        Boolean Stabilized; // 0x82
        Boolean EnableContinuousSimulation; // 0x83
        Uint8 WorldIndex; // 0x84
        Boolean Motorized; // 0x85
        char pad_0x86[0xA];
    }; // 0x90
    static_assert(sizeof(PhysicsConstraintData) == 0x90);
}
#pragma pack(pop)