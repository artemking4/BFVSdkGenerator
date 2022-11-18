// Object: FakePhysicsAffectorEntityData
// ClassId: 2738
// RuntimeId: 12422
// TypeInfo: 0x0000000144DEE120
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class FakePhysicsAffectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Direction; // 0x30
        Float32 Magnitude; // 0x40
        Float32 Frequency; // 0x44
        Float32 VibrationAmplitude; // 0x48
        Boolean Enabled; // 0x4C
        Boolean AffectChildHierarchy; // 0x4D
        Boolean ForcedImpulse; // 0x4E
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(FakePhysicsAffectorEntityData) == 0x50);
}
#pragma pack(pop)